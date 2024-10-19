
#include <stdio.h>
 int main()
{
    int number, sum = 0;
    printf("Enter number here: ");
    scanf("%d", &number);
    int orinum = number;
    while (orinum > 0)
    {
        int rem = orinum % 10;
        int fact = 1;
        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        orinum = orinum/ 10;
    }
    if (number == sum)
        printf("The number %d is a Special Number", number);
    else
        printf("The number %d is not a Special Number", number);
    return 0;
}



