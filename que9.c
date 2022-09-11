#include<stdio.h>
int main()
{
	int arr[10],i;
	printf("Enter the value of an erray.");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=9;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}