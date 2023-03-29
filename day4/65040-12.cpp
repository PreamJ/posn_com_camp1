#include<stdio.h>
int main(){
	int a[5][3], i=0, j=0, rowSum, colSum, n, m;
	for(n=0; n<5; n++){
		for(m=0; m<3; m++){
			printf("input array[%d][%d] : ", n, m); 
			scanf("%d", &a[n][m]);
		}
	}
	for(i=0; i<5; i++){
		rowSum = 0;
		for(j=0; j<3; j++){
			rowSum += a[i][j];
		}
		printf("result row %d is %d\n", i+1, rowSum);
	}
	for(j=0; j<5; j++){
		colSum = 0;
		for(i=0; i<3; i++){
			colSum += a[i][j];
		}
		printf("result column %d is %d\n", j+1, colSum);
	}
}
