#include<stdio.h>
#include<math.h>
int main(){
	int bten, btwo[10]={}, i=0, remain, j=9;
	printf("Enter the number : "); scanf("%d", &bten);
	remain = bten;
	
		
	
	for(j=9; j>=0; j--){
		for(i=0; i<10; i++){
			btwo[i] = remain%2;
			remain = floor(remain/2);
			if(remain==0) break;
		}
		printf("%d", btwo[j]);
	}
}
