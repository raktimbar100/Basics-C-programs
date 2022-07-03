#include<stdio.h>
int main()
{
	int arr[20],n,target,s1,s2;
	int result,count,sum=0;
	printf("Enter the size");
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("For arr[%d]:",i);
		scanf("%d",(arr+i));
	}
	for(i=0;i<n;i++)
	{
		printf("\t%d",i);
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		
		printf("\t%d",*(arr+i));
	}
	printf("\nEnter your target :");
	scanf("%d",&target);
	printf("\nTarget is %d",target);
	
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	printf("\nArray Sum is %d",sum);

for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(arr[i]+arr[j]==target)
		{
		
	
			printf("\nIndex:[%d %d]",i,j);
		
		}
		}
	}
}
		
		
      
