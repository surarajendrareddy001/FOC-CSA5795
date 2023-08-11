#include<stdio.h>
int main(){
int n,i,j,s,term;
printf("enter the value of n :");
scanf("%d",&n);
s=0;
for(i=1;i<=n;i++)
{
	term=0;
	for(j=1;j<=i;j++)
	{
		term=term+j;
	}
	s=s+term;
}
printf("%d is the sum of the series",s);
return(0);	
}