#include<stdio.h>
int main()
{
  int a[20][20],n,i,j,temp,li,ri;
  printf("Enter the size ");
  scanf("%d",&n);	
  for(i=0;i<n;i++)
  {
  	
  	for(j=0;j<n;j++)
  	{
	  printf("for arr[%d][%d]:",i,j);
  	 scanf("%d",(*(a+i)+j));
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
  	 printf("\t%d",*(*(a+i)+j));
  }
  
  printf("\n--------------------------\n");
  /*checking transpose*/
  printf("TRANSPOSE MATRIX:\n");
  for(i=0;i<n;i++)
  {
  	for(j=i;j<n;j++)
  	{
  		temp=a[i][j];
  		a[i][j]=a[j][i];
  		a[j][i]=temp;
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
  	 printf("\t%d",*(*(a+i)+j));
  }
  printf("\n---------------------------\n");
  /*swapping 1st col with last */
    printf("Clockwise 90 degree rotation:\n");
  for(i=0;i<n;i++)
  {
  
  		li=0;
  		ri=n-1;
  		while(li<ri)
  		{
  			temp=a[i][li];
  			a[i][li]=a[i][ri];
  			a[i][ri]=temp;
  			li++;
	        ri--;
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
  	 printf("\t%d",*(*(a+i)+j));
  }
}
