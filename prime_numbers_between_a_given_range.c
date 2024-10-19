#include<stdio.h>
int main()
{
    int n1,n2,i,j;
   // printf("\nPRIME NUMBER!");
    printf("\nEnter the lower limit=");
    scanf("%d",&n1);
    printf("\nEnter the upper limit=");
    scanf("%d",&n2);
    if(n1<n2)
    {
        for (i=n1; i<=n2; i++)
        {
            int prime=0;
            for (j=2;j<=i-1; j++)
            {
                if(i%j==0)
                {
                    prime=1;
                    break;
                }
            }
            if(prime ==0)
            {
                printf("%3d",i);
            }
        }
    }
    else
    {
        printf("This is not acceptable");
    }
    return 0;
}


