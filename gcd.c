#include<stdio.h>
int min(int a,int b)
{
	int k=a>b?a:b;
	return k;
}
int main()
{
	
	int n1,n2;
	printf("Enter the value of n1:");
	scanf("%d",&n1);
	printf("\nEnter the value of n2:");
	scanf("%d",&n2);
	int i,st;
	for(i=1;i<=min(n1,n2);i++)
	{
		if(n1%i==0&&n2%i==0)
		{
			st=i;
		}
	}
	printf("gcd is :%d",st);
}
