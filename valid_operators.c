#include<stdio.h>
#include<string.h>
int main()
{
	char id[100];
	printf("enter the operator");
	gets(id);
	int flag=0;
	if(strlen(id)==1)
	{
		if(id[0]=='+' || id[0]=='-' || id[0]=='*' || id[0]=='/' || id[0]=='%')
		{
			printf("arithmetic operations");
		}
		else if(id[0]=='&' || id[0]=='|')
		{
			printf("bitwise operator");
		}
		else if(id[0]=='<' || id[0]=='>')
		{
			printf("relational operator");
		}
		else if(id[0]=='=')
		{
			printf("assignment operator");
		}
		else if(id[0]=='?')
		{
			printf("ternary operator");
		}
		else
		{
			flag=1;
		}
	}
	else
	{
		if((id[0]=='>' && id[1]=='=') || (id[0]=='<' && id[1]=='='))
		{
			printf("relational operators");
		}
		else if(id[0]=='=' && id[1]=='=')
		{
			printf("comparison operator");
		}
		else if((id[0]=='+' && id[1]=='+') || (id[0]=='-' && id[1]=='-'))
		{
			printf("increment or decrement opeartors");
		}
		else if((id[0]=='<' && id[1]=='<' ) || (id[0]=='>' && id[1]=='>'))
		{
			printf("bitwise operations");
		}
		else if((id[0]=='&' && id[1]=='&') || (id[0]=='|' && id[1]=='|'))
		{
			printf("logical operators");
		}
		else
		{
			flag=1;
		}
	}
	if(flag)
	{
		printf("invalid operator");
	}
	return 0;
}
	
