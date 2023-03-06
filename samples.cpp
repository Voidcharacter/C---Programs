#include <stdio.h>
int factorial(int a)
{
	if (a==0)
	{
		return 1;
	}
	else
		{
			int fact=a*factorial(a-1);
			return fact;

		}
}
main()
{
	int a;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	int result=factorial(a);
	printf("The factorial of %d is:%d\n ",a,result);	
}
