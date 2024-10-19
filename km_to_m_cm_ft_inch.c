#include<stdio.h>
int main()
{
float km,m,cm,ft,inch;
printf("enter your km value:");
scanf("%f",& km);
printf("value of m,cm,ft & inch are:");
m=1000*km;
cm=100000*km;
ft=3280.84*km;
inch=39370.1*km;
printf("%.3f \n",m);
printf("%.3f \n",cm);
printf("%.3f \n",ft);
printf("%.3f \n",inch);
return 0;
}




