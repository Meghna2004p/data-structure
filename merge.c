#include<stdio.h>
int main()
{
	int i,j,a[50],b[25],c[30],temp,k=0,s,m,n;
	printf("enter the number of elements in the first array:");
	scanf("%d",&m);
	printf("enter the elements in first array:");
	for(i=0;i<m;i++)
	{	
		scanf("%d",&a[i]);
	}
	printf("enter the elements in first array before sorting:");
	for(i=0;i<m;i++)
		{
			printf("%d",a[i]);
		}
	printf("\nenter the  number of elements in second array:");
	scanf("%d",&n);
	printf("\nenter the elements in second array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nenter the elements in second array before sort:");
	for(i=0;i<n;i++)
	{
		printf("%d",&b[i]);
	}
	s=m+n;
	for(i=0;i<m;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		c[i+m]=b[i];
	}
	printf("\nmerged array:");
	for(i=0;i<s;i++)
	{
		printf("%d",c[i]);
	}
	for(i=m;i<=s;i++)
	{
		a[i]=b[k];
		k++;
	}
	for(i=0;i<=s;i++)
	{
		for(j=i+1;j<=s;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nsorted merged array:");
	for(i=0;i<s;i++)
	{
		printf("%d",a[i]);
	}
	return(0);
}
