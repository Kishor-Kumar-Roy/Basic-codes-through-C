#include<stdio.h>
int main()
{
int num,i,fact=1;
printf("enter a number: ");
scanf("%d",&num);
printf("%d!",num);
for(i=1;i<=num;i++)
{
fact=fact*i;
}
printf("=%d",fact);
return 0;
}
