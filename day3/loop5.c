#include<stdio.h>
int main(){
	int a, b, remA, remB, i=1, j=1, x;
	printf("Enter number (_,_) : ");
	scanf("%d,%d", &a, &b);
	for(i==1; i<=1000; i++){
	remA = i%a;
	remB = i%b;
	if(remA==0 && remB==0) printf("%d\n", i);
	}
}
