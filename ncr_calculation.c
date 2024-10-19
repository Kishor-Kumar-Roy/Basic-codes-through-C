#include<stdio.h>
int main()
{
    int n,r,fact1=1,fact2=1,fact3=1,i,j,k;
    printf("enter value of n & r :");
    scanf("%d%d",&n,&r);
    for(i=1;i<=n;i++)
    {
        fact1=fact1*i;
    }
    printf("%d!=%d",n,fact1);
    printf("\n");
    for(i=1;i<=r;i++)
    {
        fact2=fact2*i;
    }
    printf("%d!=%d",r,fact2);
    printf("\n");
    j=n-r;
    for(i=1;i<=j;i++)
    {
        fact3=fact3*i;
    }
    printf("%d!=%d",j,fact3);
    printf("\n");
    k=fact1/(fact2*fact3);
    printf("%d/(%d*%d)=%d",fact1,fact2,fact3,k);
    return 0;
}

