#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the range: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--,k=0){
		for(j=1;j<=n-i;j++)
		{
			printf("  ");
		}
		while(k!=2*i-1){
			printf("* ",);
			k++;
		}
		printf("\n");
	}
}
