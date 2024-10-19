#include<stdio.h>
int main()
{
    int n,i,j,p,r,fact1=1,fact2=1,k;
    printf("enter value of n & r: ");
    scanf("%d%d",&n,&r);
    if(n>r){
   for(i=1;i<=n;i++)
   {
    fact1=fact1*i;
   }
   printf("%d! =%d \n",n,fact1);
   printf("\n");
   j=n-r;
   for(i=1;i<=j;i++)
   {
    fact2=fact2*i;
   }
   printf("%d!=%d",j,fact2);
   printf("\n");
   k=fact1/fact2;
   printf("%d!/%d!=%d",n,j,k);
    }

   return 0;

}

