#include<stdio.h>
int main()
{
    int n1,n2,i,j;
     printf("enter value of lower range(n1) & higher range(n2): ");
     scanf("%d%d",&n1,&n2);
     if(n1<n2)
     {
        for(i=n1;i<=n2;i++)
        {
            for(j=2;j<=i;j++)
            {
                if(i%j==0)
                break;
            }
            if(i==j)
            printf("%d ",j);
        }
     }
    return 0;
}



