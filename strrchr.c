#include<stdio.h>
int fun(char s[],char c);
int length(char s[]);
int main()
{
	int k;
	char s[50],c;
	printf("ENTER ANY STRING:\n");
	scanf("%s",s);
	printf("ENTER A CHARECTER IN STRING TO SEARCH:\n");
	scanf(" %c",&c);
	k=fun(s,c);
	printf("%d",k);
	return 0;
}
int length(char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++);
	return i;
}
int fun(char s[],char c)
{
	int i,k;
	k=length(s);
	for(i=k;;i--)
	{
		if(s[i]==c)
		return i;	
	}
}


