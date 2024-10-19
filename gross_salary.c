#include<stdio.h>
int main()
{
float basicsalary,dearnessallowance,houserent,grosssalary;
printf("enter your  basic salary: ");
scanf("%f",&basicsalary);
dearnessallowance=0.4*basicsalary;
houserent=0.2*basicsalary;
grosssalary=basicsalary+dearnessallowance+houserent;
printf("grosssalary is=%.2f",grosssalary);
return 0;
}
