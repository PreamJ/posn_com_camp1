#include<stdio.h>
int main(){
	int count=0, i=0, a[20];
	for(i=0; i<20; i++){
		printf("Enter the value: ");
		scanf("%d", &a[i]);
		if(a[i]>0) count += 1;
	}
	printf("There are %d positive integer", count);
}
