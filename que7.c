#include<stdio.h>
int main()
{
	int arr[10],i,j,temp;
	printf("Enter the element of array:");
	for(i=0;i<=9;i++)
    {
	   scanf("%d",&arr[i]);
       }
       for(i=0;i<=9;i++)
       { 
          for(j=i+1;j<10;j++)
       	 {
			if(arr[i]>arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
			   }
	    }
	   printf("%d is the second largest number.",arr[8]);
}
