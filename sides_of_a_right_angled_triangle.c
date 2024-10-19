#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter value of a ,b & c: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a*a+b*b==c*c || a*a==b*b+c*c || b*b==a*a+c*c)
    {
        printf("%d,%d,%d are sides of a right angled triangle",a,b,c);
    }
    else
    {
         printf("%d,%d,%d are not sides of a right angled triangle",a,b,c);
    }
    return 0;
}