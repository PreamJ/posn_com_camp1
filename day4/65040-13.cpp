#include<stdio.h>
int main(){
	int arr[4][4], i=0, j=0, sum=0;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("input arr [%d][%d] : ", i, j); scanf("%d", &arr[i][j]);
			if(i==j){
				sum += arr[i][j];
			}
			else if(i+j == 3){
				sum += arr[i][j];
			}
		}
	}
	printf("result : %d", sum);
}
