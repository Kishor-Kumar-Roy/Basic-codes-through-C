#include<stdio.h>
int main()
{
int num,rem,sum=0;
printf("enter a number: ");
scanf("%d",&num);
do
{
rem=num%10;
num=num/10;
sum=sum+rem;
}
while(num>0);
printf("sum of digits is=%d",sum);
return 0;
}
