#include<stdio.h>
int main(){
	int a, i=0, n[a];
	printf("How many values would you like to input : "); scanf("%d", &a);
	for(i=0; i<a; i++){
		printf("Enter the value : ");
		scanf("%d", &n[i]);
	}
	
	for(int j=a-1; j>=0; j--){
		printf("%d ", n[j]);
	}
}

