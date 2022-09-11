#include<stdio.h>
int main()
{
	int arr1[10],arr2[10],i;
	printf("Enter the value of arry.");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<=9;i++)
	{
		arr2[i]=arr1[i];
	}
	printf("\nThe element of second copy of first array is:");
	for(i=0;i<=9;i++)
	{
		printf("%d ",arr2[i]);
	}
}