#include<stdio.h>
int main(){
	int num, i=2, tot=0, j=2;
	printf("Enter your number : "); scanf("%d", &num);
	printf("Prime number :");
	for(i=2; i<=num; i++){
		for(j=2; j<i; j++){
			if(i%j == 0){
				break;
			}
		}
		if(j==i){
			printf(" %d", j);
			tot += 1;
		}
	}
	printf("\nThere are %d prime numbers",tot);
}
