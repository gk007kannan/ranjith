
#include <stdio.h>
#include<conio.h> 
int main()
{
  int year;
 clrscr();
  printf("Enter a year to check if it is a leap year\n");
  scanf("%d", &year);
  if ( year%400 == 0) 
    printf("%d is a leap year.\n", year);
  else if ( year%100 == 0)
    printf("%d is not a leap year.\n", year);
  else if ( year%4 == 0)
    printf("%d is a leap year.\n", year);
  else if(year%100==0)
    printf("%d is not a leap year.\n", year);  
 getch();
  return 0;
}
