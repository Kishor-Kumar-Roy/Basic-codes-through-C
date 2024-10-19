#include<stdio.h>
int main()
{
    int n,sum=0,product=1,rem;
    printf("enter✍🏻 an integer:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;
        product=product*rem;
    }
    printf("the sum of digits is: %d \n",sum);
    printf("the product of digits is : %d \n",product);
    return 0;
}
