#include<stdio.h>
int main(){
	int x, i, r;
	printf("Please enter your x value : "); scanf("%d", &x);
	i = 2;
	for(i==2;i<x;i++){
		if(x%i != 0){
			continue;
		}
		else{
			printf("%d is not a prime number", x);
			return 0;
		}
	}
	printf("%d is a prime number", x);
}
