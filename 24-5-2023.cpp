#include<stdio.h>
int main()
{
	int arr[100],n,i,num,a=0;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter elemets to an array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter a number tofind its frequency :");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		
		if(arr[i]==num)
		a++;
	}
	printf("Frequency is=%d times",a);
}
