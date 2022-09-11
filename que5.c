#include<stdio.h>
int main()
{
	int arr[10],i,min;
	printf("Enter the element of erray:");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	for(i=0;i<=9;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("%d is the smallest number in array.",min);
}