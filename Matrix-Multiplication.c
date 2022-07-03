#include<stdio.h>
int res[20][20];
int main()
{
	int i,j,k,n,m,l,t;
	printf("\t\t\tFOR 1ST MATRIX:\n");
	printf("Enter M:");
	scanf("%d",&m);
	printf("Enter N:");
	scanf("%d",&n);
	int a[m][n];
	printf("Enter the 1st matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("For a[%d][%d]",i,j);
			scanf("%d",(*(a+i)+j));
		}
	}
		printf("\n1st matrix is:\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",i);
	}
	for(i=0;i<m;i++)
	{
		printf("\n\n%d",i);
		for(j=0;j<n;j++)
		{
			printf("\t%d",*(*(a+i)+j));
		}
	}
	printf("\n\t\t\tFOR 2ND MATRIX:\n");
	printf("Enter l:");
	scanf("%d",&l);
	printf("Enter k:");
	scanf("%d",&k);
	int e[l][k];
	printf("Enter the 2nd matrix\n");
	for(i=0;i<l;i++)
	{
		for(j=0;j<k;j++)
		{
			printf("For e[%d][%d]",i,j);
			scanf("%d",(*(e+i)+j));
		}
	}

	printf("\n2nd matrix is:\n");
	for(i=0;i<k;i++)
	{
		printf("\t%d",i);
	}
	for(i=0;i<l;i++)
	{
		printf("\n\n%d",i);
		for(j=0;j<k;j++)
		{
			printf("\t%d",*(*(e+i)+j));
		}
	}
if(n!=l)
{
	printf("\nWrong entry sorry\nMaintain M*N , N*p where N=N");
    exit(0);
}
	else
	{
		res[m][k];
	
		for(i=0;i<m;i++)
		{
			for(j=0;j<k;j++)
			{
				for(t=0;t<k;t++)
				{
					res[i][t]+=a[i][j]*e[j][t];
				}
			}
		}
	}
	printf("\nresultant matrix is:\n");
	for(i=0;i<k;i++)
	{
		printf("\t%d",i);
	}
	for(i=0;i<m;i++)
	{
		printf("\n\n%d",i);
		for(j=0;j<k;j++)
		{
			printf("\t%d",*(*(res+i)+j));
		}
	}
	
}
