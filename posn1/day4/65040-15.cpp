#include<stdio.h>
int main(){
	int arr1[3][2], i=0, j=0, sum=0, n=0, m=0, a=0, b=0, arrN[3][2], arr2[3][2];
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			printf("input the first matrix [%d][%d] : ", i, j); scanf("%d", &arr1[i][j]);
		}
	
	}
	printf("\n\n");
	for(n=0; n<3; n++){
		for(m=0; m<2; m++){
			printf("input second metrix [%d][%d] : ", n, m); scanf("%d", &arr2[n][m]);
		}
	}
	printf("\n\n");
	for(b=0; b<2; b++){
		for(a=0; a<3; a++){
			arrN[a][b] = arr1[a][b]+arr2[a][b];
			printf("%d  ", arrN[a][b]);
		} printf("\n");
	}
	
}
