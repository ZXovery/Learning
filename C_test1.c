#include <stdio.h>

int Days_of_Month(int month, int year);
bool Is_leap(int year);

int main()
{
  int month, year;
  printf("Please Input Month and Year:\n");
  scanf_s("%d%d",&month,&year);

  printf("Days are %d in total.\n", Days_of_Month(month, year));
  return 0;
}

//运用表驱动，依赖于 Is_leap 函数
int Days_of_Month(int month, int year){
  int days[12] = {31, Is_leap(year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

  return days[month-1];
}

//判断是否为闰年
bool Is_leap(int year){
  if(year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
    return true;
  return false;
}
