#include<stdio.h>
int main()
{
	int i,n,a[10],sum=0;
	printf("enter the no of elements");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the sum of array elements:");
	for(i=0;i<n;i++)
	{
	sum=sum+a[i];
	}
		printf("%d",sum);
		return(0);
}
