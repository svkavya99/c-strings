#include<stdio.h>
#include<string.h>
int main()
{
char str[50],des[50],s;
int l;
printf("ENTER A SOURCE STRING\n");
scanf("%s",str);
printf("ENTER A DESTINATION STRING\n");
scanf("%s",des);
printf("Enter length of string");
scanf("%d",&l);
s=strlcpy(des,str);
printf("%s",s);
return 0;
}

