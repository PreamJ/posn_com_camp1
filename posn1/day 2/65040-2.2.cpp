#include<stdio.h>
int main(){
	int a, b, c, d, e;
	int A, B, C, D, E;
	int odd, even;
	printf("Enter five numbers(a,b,c,d,e): ");scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
	A = a%2;
	B = b%2;
	C = c%2;
	D = d%2;
	E = e%2;
	if(A==1){
		printf("%d is odd number\n", a);
	}
	else{
		printf("%d is even number\n", a);
	}
	if(B==1){
		printf("%d is odd number\n", b);
	}
	else{
		printf("%d is even number\n", b);
	}
	if(C==1){
		printf("%d is odd number\n", c);
	}
	else{
		printf("%d is even number\n", c);
	}
	if(D==1){
		printf("%d is odd number\n", d);
	}
	else{
		printf("%d is even number\n", d);
	}
	if(E==1){
		printf("%d is odd number\n", e);
	}
	else{
		printf("%d is even number\n", e);
	}
	odd = A+B+C+D+E;
	even = 5-odd;
	printf("There are %d odd numbers\n", odd);
	printf("There are %d even numbers\n0", even);
}
