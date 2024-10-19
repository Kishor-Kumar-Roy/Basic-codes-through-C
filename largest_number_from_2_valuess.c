#include<stdio.h>
int main()
{
int num1,num2;
printf("enter value of num1 and num2: ");
scanf("%d%d",&num1,&num2);
if(num1>num2)
{
    printf("%d is largest ",num1);
}
else
{
    printf("%d is largest",num2);
}
return 0;
}
