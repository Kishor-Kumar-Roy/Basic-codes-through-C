#include<stdio.h>
int main()
{
char ch;
printf("enter a character: ");
scanf("%c",&ch);
if(ch>='a' && ch<='z')
{
    printf("%c is small letter",ch);
}
else if(ch>='A' && ch<='Z')
{
    printf("%c is capital letter",ch);
}
else if(ch>='0' && ch<='9')
{
    printf("%c is a number",ch);
}
else
{
    printf("%c is neither a letter nor a number",ch);
}
return 0;
}




