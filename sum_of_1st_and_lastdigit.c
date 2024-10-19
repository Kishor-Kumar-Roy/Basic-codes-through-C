#include<stdio.h>
int main()
{
int num,firstdigit,lastdigit,sum;
printf("enter a four-digit number:");
scanf("%d",&num);
lastdigit=num%10;
firstdigit=num/1000;
sum=lastdigit+firstdigit;
printf("sum of firstdigit and lastdigit is: %d",sum);
return 0;
}
