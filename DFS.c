#include<stdio.h>
void DFS(int);
int a[10][10],visited[10],n;
void DFS(int i)
{
	int j;
	printf("\n %d",i);
	visited[i]=1;
	for(j=0;j<n;j++)
	{
		if(!visited[j] && a[i][j]==1)
		{
			DFS(j);
		}
	}
}
void main()
{
	int i,j;
	printf("enter number of vertices");
	scanf("%d",&n);
	printf("enter the adacency matrix of the graph");
	for(i=0;i<n;i++)
	{
		printf("next");
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		visited[i]=0;
		
	}
	DFS(0);
}

	



