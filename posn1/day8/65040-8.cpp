#include<stdio.h>
int n;
void factorial(){
	int fac=1;
	for(int i=1;i<=n;i++){
		fac *= i;
	}
	printf("%d", fac);
}
int main(){
	printf("Enter a number : "); scanf("%d", &n);
	factorial();
}
