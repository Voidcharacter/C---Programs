#include <stdio.h>
int samples(int N,int K){
	int i,b[N],a[100];
	if (N==K)
	{
		for(i=0;i<N;i++)
		{
		a[i]=b[i];
		}
	}
}

main()
{
	int N,K,res;
	printf("Enter the value of N and k : \n");
	scanf("%d %d",&N,&K);
	res=samples(N,K);
}

