#include<stdio.h>
int main() {
	float celcius,farhenheit;
	
	printf("enter the temp in celcius:");
	scanf("%f",&celcius);
	
	farhenheit=(1.8*celcius)+32;
	
	printf("%.2f of celcius is %.2f of farhenheit",celcius,farhenheit);
	
	return 0;
	
}