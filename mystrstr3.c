#include<stdio.h>
int mystrstr(char s1[],char sub[]);
int main()
{
	char str1[50],str2[50];
	int n;
	printf("Enter main string");
	scanf("%s",str1);
	printf("ENTER SUB STRING");
	scanf("%s",str2);
	n=mystrstr(str1,str2);
	if(n==1)
	{
		printf("string found");
	}
	else
	{
		printf("STRING not found");
	}
	return 0;
}
int mystrstr(char s1[],char sub[])
{
int b,z=0,i;
for(i=0;s1[i]!='\0';i++)
{
b=i;
while(sub[z]==s1[b]&&sub[z]!='\0')
{
b++;
z++;
}
if(sub[z]==0)
{
return i;
}

}
return -1;;;
}
