#include<stdio.h>
void mystrcat(char str[],char d[],int n);
int main()
{
char str[50],d[50];
int n;
printf("ENTER A STRING\n");
scanf("%s",str);
printf("ENTER ANOTHER STRING\n");
scanf("%s",d);
printf("ENTER NO.OF CHARECTERS\n");
scanf("%d",&n);
mystrcat(str,d,n);
return 0;
}
void mystrcat(char str[],char d[],int n)
{
int i,j;
for(i=0;str[i]!='\0';i++)
{
}
for(j=0;j<n;j++,i++)
{
str[i]=d[j];
}
str[i]!='\0';
printf("%s",str);
}

