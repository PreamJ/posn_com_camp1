#include<stdio.h>
int main(){
	int high, wide, j=0, i=0;
	printf("Enter hight : "); scanf("%d", &high); 
	wide = 2*high;
	printf("\n");
	for(i=0; i<high;i++){
		for(j=0; j<wide; j++){
			if(i==j){
				printf("\\");
			}
			else if(i==high*2-j-1){
				printf("/");
			}
			else printf(" ");
		}
		printf("\n");
	}
}
