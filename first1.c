#include<stdio.h>
int array[10][10],completed[10],n,cost=0;
int least(int c)
{
	int i,nc=999,min=999,kmin;
	for(i=0;i<n;i++)
	{
		if(array[c][i]!=0 && (completed[i]==0))
		{
			if(array[c][i]<min)
			{
				min=array[c][i];
				kmin=array[c][i];
				nc=i;
			}
		}
	}
	if(min!=999)
	{
		cost=cost+kmin;
	}
		return nc;
}
	void mincost(int city)
	{
		int ncity;
		completed[city]=1;
		printf("%d",city+1);
		ncity=least(city);
		if(ncity==999)
		{
			ncity=0;
			printf("%d",ncity+1);
			cost+=array[city][ncity];
			return;
		}
		mincost(ncity);
	}
	void input()
	{
		int i,j;
		printf("enter the numbe of villages");
		scanf("%d",&n);
		printf("\n enter the cost matrix");
		for(i=0;i<n;i++)
		{
			printf("enter the elements of row:%d\n",i+1);
			for(j=0;j<n;j++)
			{
				scanf("%d",&array[i][j]);
			}
			completed[i]=0;
		}
		printf("\n the cost list is:");
		for(i=0;i<n;i++)
		{
			printf("\n");
			for(j=0;j<n;j++)
			{
				printf("%d",array[i][j]);
			}
		}
	}
int main()
{
	input();
	printf("\n the path is:\n");
	mincost(0);
	printf("\n minimum cost is %d\n",cost);
	return 0;
}

	
		
