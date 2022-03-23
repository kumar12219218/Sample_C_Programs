#include<stdio.h>
#define N 5
int main()
{
	int i,j,k,q,min,n,d,p[]={5,4,6,2,7};
	int m[N][N]={0};
	int s[N][N]={0};
	n=N;
	for(d=1;d<n-1;d++)
	{
		for(i=1;i<n-d;i++)
		{
			min=99999;
			j=i+d;
			for(k=1;k<=j-1;k++)
			{
				q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
				if(q<min)
				{
					min=q;
					s[i][j]=k;
				}
			}
			m[i][j]=min;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
}


					