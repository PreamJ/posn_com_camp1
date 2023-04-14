#include<stdio.h>
int size;

int maxmin(){
	int n[size];
	printf("Number of elements : ");
	scanf("%d", &size);

	for(int i=0; i<size; i++){
		printf("element - %d : ", i+1); scanf("%d", &n[i]);
	}
	
	int max=n[0];
	for(int i=0; i<size; i++){
		if(n[i]>=max) max = n[i];
	}
	printf("The largest element in the array is : %d\n", max);
	
	int min;
	for(int i=0; i<size; i++){
		if(n[i]<=min) min = n[i];
	}
	printf("The smallest element in the array is : %d\n", min);
}

int main(){
	maxmin();
}
