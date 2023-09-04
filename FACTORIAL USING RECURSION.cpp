#include<stdio.h>
int main ()
{
	int n,result;
	printf("enter the integer");
	scanf("%d",&n);
	result=factorial(n);
	printf("%d=%d\n",n,result);
	return 0;
}
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
