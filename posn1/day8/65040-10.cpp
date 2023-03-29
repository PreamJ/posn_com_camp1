#include<stdio.h>
int n, sum=0;
int factorial(int n){

	if(n==1) {
		return n;
	}
	else{
		n = n * factorial(n-1);
		sum += n;
		return n;
	}

}
int main(){
	printf("Enter a number : ");
	scanf("%d", &n);
	factorial(n);
	printf("%d", sum+1);
}
