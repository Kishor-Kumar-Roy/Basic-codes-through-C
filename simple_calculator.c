#include<stdio.h>
int main()
{
char operator;
int a,b,result;
printf("enter an operator(+,-*,/) :  ");
scanf("%c",&operator);
printf("enter value of a,b: ");
scanf("%d%d",&a,&b);
switch(operator)
{
    case '+': {
        printf("result is=%d",result=a+b);
        break;
    }
      case '-': {
        printf("result is=%d",result=a-b);
        break;
    }
     case '*': {
        printf("result is=%d",result=a*b);
        break;
    }
     case '/': {
        printf("result is=%d",result=a-b);
        break;
    }

}
return 0;
}
