#include<stdio.h>
int main(){
	int sum=0, i=0, a[20];
	float num, avg;
	for(i=0; i<20; i++){
		printf("Enter the value: ");
		scanf("%d", &a[i]);
		if(a[i]>0){
			sum += a[i];
			num += 1;
		}
	}
	avg = sum/num;
	printf("There are %.2f positive integer", avg);
}
