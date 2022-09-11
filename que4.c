#include<stdio.h>
int main()
{
	int arr[10],i,max;
	printf("Enter the element of erray:");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=0;
	for(i=0;i<=9;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("%d is the largest number in array.",max);
}