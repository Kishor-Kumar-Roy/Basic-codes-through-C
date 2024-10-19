#include<stdio.h>
int main()
{
float a,b,r,arearec,areacir,perimeter,circum;
printf("value of a,b & r:");
scanf("%f%f%f",&a,&b,&r);
printf("area of rect and circle are:");
arearec=a*b;
areacir=3.14*r*r;
printf("%.3f %.3f\n",arearec,areacir);
printf("perimeter of rect and circumference of circle are:");
perimeter=2*(a+b);
circum=2*3.14*r;
printf("%.3f %.3f",perimeter,circum);
return 0;
}




