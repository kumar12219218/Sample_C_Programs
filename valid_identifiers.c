#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char id[100];
	int flag=0,i;
	gets(id);
	if(isalpha(id[0]))
	{
		for(i=1;i<strlen(id);i++)
		{
			if((isalpha(id[i])) || (isdigit(id[i])) || (id[i]=='_'))
			{
				flag=0;
			}
			else
			{
				flag=1;
				break;
			}
		}
	}
	else
	{
		flag=1;
	}
	if(flag==1)
	{
		printf("invalid identifier");
	}
	else
	{
		printf("valid identifier");
	}
	return 0;
}
	
		
