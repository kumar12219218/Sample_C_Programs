#include<stdio.h>
#include<string.h>
#define SIZE 10
int main()
{
	char non_terminal,alpha,beta;
	int index=3,n,i;
	char production[10][SIZE];
	printf("enter the number of productions");
	scanf("%d",&n);
	printf("enter the grameer in the form of E->EA|A");
	for(i=0;i<n;i++)
	{
		scanf("%s",production[i]);
	}
	for(i=0;i<n;i++)
	{
		non_terminal=production[i][0];
		if(non_terminal==production[i][index])
		{
			alpha=production[i][index+1];
			printf("is left recursive");
			while(production[i][index]!=0 && production[i][index]!='|')
			{
				index++;
			}
			if(production[i][index]!=0)
			{
				beta=production[i][index+1];
				printf("with out left recursive\n");
				printf("%c->%c%c\'",non_terminal,beta,non_terminal);
				printf("\n%c\'->%c%c\'|e\n",non_terminal,alpha,non_terminal);
			}
			else
			{
				printf("can't be reduced");
			}
		}
		else
		{
			printf("it is not left recursive");
		}
		index=3;
	}
}
				
		
	
