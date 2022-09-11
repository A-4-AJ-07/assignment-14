#include<stdio.h>
int main()
{
	int arr[10],i,soe=0,soo=0;
	printf("Enter the element of array:");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=9;i++)
	{    if(arr[i]%2==0)
	    soe=soe+arr[i];
	    else
	    soo=soo+arr[i];
	    
	}
	printf("%d is the sum of even numbers in array.\n",soe);
	printf("%d is the sum of odd numbers in array.",soo);
	
}