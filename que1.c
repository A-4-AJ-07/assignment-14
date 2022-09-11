#include<stdio.h>
int main()
{
	int arr[10],i,sum=0;
	printf("Enter the element of array:");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=9;i++)
	{
	    sum=sum+arr[i];
	}
	printf("%d is the sum of array.",sum);
}