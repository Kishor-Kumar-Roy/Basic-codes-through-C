#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter the term: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d+",n);
            count++;
        }
    }
    /*if(count==2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime");
    } */
    return 0;
}