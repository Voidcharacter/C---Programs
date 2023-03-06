#include <stdio.h>
main()
{
	int a,b,c,d;
	printf("enter the value of a,b,c,d");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int average=(a+b+c+d)\4;
	printf("average of 4 subjects is:%d\n",average);
}
