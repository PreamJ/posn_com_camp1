#include<stdio.h>
int main(){
	int high, wide, direc, j=0, i=0;
	printf("Enter hight : "); scanf("%d", &high); 
	printf("Enter the direction (press 1 for left and 2 for right) : "); scanf("%d", &direc);
	wide = 2*high;
	printf("\n");
	if(direc == 1){
	for(j=0; j<wide;j++){
		for(i=0; i<high; i++){
			if(i==j){
				printf(" \\");
				printf("\n");
			}
			else if(i==high*2-j-1){
				printf(" /");
				printf("\n");
			}
			else printf(" ");
		}
		printf("\n");
	}
	}
	if(direc == 2){
		for(j=0; j<wide;j++){
		for(i=0; i<high; i++){
			if(i+j==high+1){
				printf(" /");
				printf("\n");
			}
			
			else if(j-i-1==high){
				printf(" \\");
				printf("\n");
			}
			else printf(" ");
		}
		printf("\n");
	}
	}
	
	
}
