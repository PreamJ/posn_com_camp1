#include<stdio.h>
int main(){
	int a[10], i=0, num=0;
	for(i=0; i<10; i++){
		printf("Ener the value : "); scanf("%d", &a[i]);
		if(40%a[i]==0){
			num += 1;
		}
		
	}
	printf("%d", num);
}
