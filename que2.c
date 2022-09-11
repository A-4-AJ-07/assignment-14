#include<stdio.h>
int main()
{   
    float avg;
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
	avg=sum/10.0;
	printf("%f is the avg of number.",avg);
}