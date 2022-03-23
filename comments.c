#include<stdio.h>
#include<string.h>
int main()
{
	char id[100],c;
	int n=0,len;
	while((c=getchar())!='~')
	{
		id[n++]=c;
	}
	id[n++]='\0';
	len=strlen(id);
	if(id[0]=='/' && id[1]=='/')
	{
		printf("single line comment");
	}
	else if(id[0]=='/' && id[1]=='*' && id[len-2]=='/' && id[len-3]=='*')
	{
		printf("multi line comment");
	}
	else
	{
		printf("normal statement");
	}
	return 0;
}
	
