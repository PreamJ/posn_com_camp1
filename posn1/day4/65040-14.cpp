#include<stdio.h>
int main(){
	int arr[4][4], i=0, j=0, Nsum=0, sum;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("input arr [%d][%d] : ", i, j); scanf("%d", &arr[i][j]);
			sum += arr[i][j];
			if(i==j){
				Nsum += arr[i][j];
			}
		}
	}
	sum = sum-Nsum;
	printf("result : %d", sum);
}
