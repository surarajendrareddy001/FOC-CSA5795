#include<stdio.h>
int main() {
	int n,r,reversed=0,original;
	printf("enter any number:");
	scanf("%d",&n);
	
	original=n;
	while(n>0) {
		r=n%10;
		reversed=reversed+(r*r*r);
		n=n/10;
	}
	if(original==reversed ){
		printf("it is a armstrong num");
	}
	else{
		printf("it is not a armstrong num");
	}
	return 0;
}