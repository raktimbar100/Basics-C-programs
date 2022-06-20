#include<stdio.h>
int n1,n2,temp1,temp2;//Global variables
int main()
{
	//Printing messages to user
	printf("\t\t\t:Finding max min:\n");
	printf("Enter the numbers :");
	printf("\n---------------------\n");
	//Taking output
	int static count=0;
	printf("Enter number %d:",++count);
	scanf("%d",&n1);
	printf("Enter number %d:",++count);
	scanf("%d",&n2);
	//Logical portion in binary we know 0*1=0 and 1*1=1.So if
	//n1>n2 and n2>n1 is true it will return 1 if false it will return 0.
	//we use this logic and lastly checking conditions when it will >0
	//max is 1st else 2nd and same will be min case.
 	temp1=(n1>n2)*1;//suppose n1=10,n2=20.is n1>n2?NO so 0 will be assigned to temp 1
 	temp2=(n2>n1)*1;//n2>n1?TRUE.So 1*1 will be assigned to temp 2.
 	temp1>0?printf("Max is number 1:%d",n1) //is temp1>0 NO.
	        :printf("Max is number 2:%d",n2); //so max should not n1 so it goes to else part that is n2 is max.
 	printf("\n");
	temp1<1?printf("Min is number 1:%d",n1)//if temp1<1.is temp1<1?True.so goes to the yes part that is min is n1. 
	      :printf("Min is number 2:%d",n2);//It will not print.
	
	return 0;
}//End of main
