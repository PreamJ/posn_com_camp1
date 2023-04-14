#include<stdio.h>
int main(){
	int sum=0, i=0, a[20];
	for(i=0; i<20; i++){
		printf("Enter the value: ");
		scanf("%d", &a[i]);
		if(a[i]%2==1){
			sum += a[i];
		}
	}
	printf("The result is %d", sum);
}
