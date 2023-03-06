#include<stdio.h>
int main()
{
	int n,i,j,k=0,l=0;
	char a[ ]={'A','B','C','D'};
	printf("Enter the range: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++,k=0)
	{
		for(j=1;j<=n-i;j++)
		{
		printf("  ");
	}
	    while(k!=2*i-1)
		{
			if(l<=i)
			{
				while(l<=i)
				{
					if(l==i)
					{
					printf("%c ",a[l]);
					l=0;
				}
				else
				{
				printf("%c ",a[l]);
				l=l+1;
				k++;
				}
				}			
		}
		else
		{
			l=0;
		}
		}
		l=0;
	printf("\n");
	}
}
