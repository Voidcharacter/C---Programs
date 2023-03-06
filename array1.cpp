#include <stdio.h>
main()
{
	int n,i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
			printf("Enter the %d element of array:",i);
		scanf("%d",&a[i]);
		printf("\n");
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

