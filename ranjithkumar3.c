#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,i;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=5;i++)
{
sum=i*n;
printf("%d",sum);
}
getch();
return 0;
}
