#include<stdio.h>

int main(){
	int i=0, n[5];
	for(i=0; i<5; i++){
		printf("Enter the value : ");
		scanf("%d", &n[i]);
	}
	
	for(int j=4; j>=0; j--){
		printf("%d ", n[j]);
	}
}

