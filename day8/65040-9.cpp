#include<stdio.h>
int n;
int factorial(int n){
	if(n==1) return n;
	else{
		return n * factorial(n-1);
	}
}
int main(){
	int fac;
	printf("Enter a number : ");
	scanf("%d", &n);
	fac = factorial(n);
	printf("%d", fac);
}
