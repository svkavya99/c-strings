#include<stdio.h>
#include<string.h>
int mystrlen ();
int main()
{
char str[50];
int k;
printf("ENTER A STRING\n");
scanf("%s",str);
k=mystrlen(str);
printf("THE LENGTH OF GIVEN STRING IS %d\n",k);
return 0;

}
int mystrlen(char str[])
{
  int i;
  for(i=0;str[i]!='\0';i++);
  {
return i;	
  }
}
