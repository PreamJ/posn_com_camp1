#include<stdio.h>
int main(){
	int arr[10], sum=0;
	int *p;
	p = arr;
	for(int i=0; i<10; i++){
		printf("Enter a number(%d) : ", i+1);
		scanf("%d", p);
		sum += *p;
		p++;
	}

	printf("total is %d", sum);
}
