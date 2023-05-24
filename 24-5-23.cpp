#include<stdio.h>
int main()
{
	int arr1[100],arr2[100],arr3[100],i,n,m;
	printf("enter the size of an first array");
	scanf("%d",&m);
	 printf("enter the size of an second array");
	scanf("%d",&n);
	printf("enter elements in first arrray");
	for(i=0;i<n;i++)
	{
	
	scanf("%d",&arr1[i]);
    }
   
	printf("enter elements in second arrray");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr2[i]);
    }
    for(i=0;i<n;i++)
    {
     arr3[i]=arr1[i];
    
	}
	 for(i=0;i<n;i++)
    {
     arr3[i+m]=arr2[i];
    }
    printf("After merging two arrays:");
    for(i=0;i<m+n;i++)
	{
		printf("%d  ",arr3[i]);
	}
   return 0;
}
