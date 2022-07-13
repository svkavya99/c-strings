#include<stdio.h>
void reverse(char str[]);
int length(char str[]);
int main()
{
char str[50];
printf("ENTER A STRING\n");
scanf("%s",str);
reverse(str);
return 0;
}
int length(char str[])
{
int i;
for(i=0;str[i]!='\0';i++);
return i;	
}
void reverse(char str[])
{
int i,j,k,temp;
k=length(str);
printf("THE LENGTH OF THE STRING IS %d\n",k);
for(i=0,j=k-1;i<j;i++,j--)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
}
printf("THE REVERSE OF STRING IS %s\n",str);
}	
