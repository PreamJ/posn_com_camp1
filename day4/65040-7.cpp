#include<stdio.h>
int main(){
	int A[4], B[4], i=0, count=0;
	for(i=0; i<4; i++){
		printf("Enter A value(%d): ", i+1);
		scanf("%d", &A[i]);
		printf("Enter B value(%d): ", i+1);
		scanf("%d", &B[i]);
	}
	printf("A intersec B is ");
	for(int j=0; j<4; j++){
		for(int k=0; k<4; k++){
			if(A[j]==B[k]){
				count += 1;
				
			}
		}
	}
	printf(" %d",count);
}
