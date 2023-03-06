#include<stdio.h>
int main()
{
	int n,binary,a[15],i=0,j;
	printf("Enter the value of n:");
	scanf("%d",&n);
	while(n>0)
	{
		binary=n%2;
		a[i]=binary;
		n=n/2;
		i=i+1;
	}
	for (j=i;j>=0;j--)
	{
		printf("%d ",a[j]);
	}
	
}
