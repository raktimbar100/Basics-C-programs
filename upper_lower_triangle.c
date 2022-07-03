#include<stdio.h>
int main()
{
	int i,j,n,ch;
	int e[20][20];
	printf("Enter the size ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("e[%d][%d] : ",i,j);
			scanf("%d",(*(e+i)+j));
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\t%d",i);
	}
	for(i=0;i<n;i++)
	{
		printf("\n\n%d",i);
		
		for(j=0;j<n;j++)
		{
			printf("\t%d",*(*(e+i)+j));
		}
		
	
		printf("\n");
	}
printf("-------------------------\n");
while(1)
{
	printf("TYPE 1 for Upper diagonal\nTYPE 2 for Lower diagonal\nTYPE 3 for new input\nTYPE 4 for displaying new entered array");
	printf("\nEnter Your choice:");
	scanf("%d",&ch);
switch(ch)
{
	case 1:
		for(i=0;i<n;i++)
	{
		printf("\t%d",i);
	}
	for(i=0;i<n;i++)
	{
		printf("\n\n%d",i);
			for(j=0;j<i;j++)
		{
			printf("\t ");
		}
		for(j=0;j<n;j++)
		{
			
		if(i<=j)
		{
			printf("\t%d",*(*(e+i)+j));
		}
		
	  }
	  printf("\n");
	}
	break;
	case 2:
		for(i=0;i<n;i++)
	{
		printf("\t%d",i);
	}
	for(i=0;i<n;i++)
	{
		printf("\n\n%d",i);
		
		for(j=0;j<n;j++)
		{
			
		if(i>=j)
		{
			printf("\t%d",*(*(e+i)+j));
		}
		
	  }
	  printf("\n");
	}
	break;
	case 3:
			printf("Enter New size ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("e[%d][%d] : ",i,j);
			scanf("%d",(*(e+i)+j));
		}
	}
	break;
	case 4:
		for(i=0;i<n;i++)
	{
		printf("\t%d",i);
	}
	for(i=0;i<n;i++)
	{
		printf("\n\n%d",i);
		
		for(j=0;j<n;j++)
		{
			printf("\t%d",*(*(e+i)+j));
		}
		
	
		printf("\n");
	}
	break;
	default:
	 printf("Try again");	
}

}
return 0;
}
