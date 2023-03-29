#include<stdio.h>
int main(){
	int high, wide, j=0, i=0;
	printf("Enter hight : "); scanf("%d", &high); 
	wide = 2*high;
	printf("\n");
	for(i=0; i<high;i++){
		for(j=0; j<wide; j++){
			if(i==high-j-1){
				printf("/");
			}
			else if(j==high+i){
				printf("\\");
			}
			else printf(" ");
		}
		printf("\n");
	}
}
