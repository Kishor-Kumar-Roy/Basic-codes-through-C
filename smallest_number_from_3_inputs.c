#include<stdio.h>
int main()
{
int num1,num2,num3;
printf("enter num1,num2 & num3:");
scanf("%d%d%d",&num1,&num2,&num3);
if(num1==num2 || num1==num3)
printf("inputs are wrng");
else {
if(num1<num2 && num1<num3)
{
    printf("%d is smallest number",num1);
}
else if(num2<num1 && num2<num3)
{
    printf("%d is smallest",num2);
}
else 
{
    printf("%d is smallest",num3);
}
}
return 0;
}



