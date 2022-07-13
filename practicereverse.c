#include<stdio.h>
void reverse(char s[]);
int mylen(char str[]);
int main()
{
char str[50];
printf("ENTER A STRING");
scanf("%s",str);
reverse(str);
return 0;
}
int mylen(char str[])
{
int i;
for(i=0;str[i]!='\0';i++);
return i;		
}
void reverse(char s[])
{
int temp,i,j,k;
k=mylen(s);
printf("k=%d\n",k);
for(i=0,j=k-1;i<j;i++,j--)
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
printf("the reverse of string is %s",s);
}
