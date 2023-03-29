#include<stdio.h>
int main(){
	int a[5], tot=0, max, min, i=0;
	float avg;
	
	for(i=0; i<5; i++){
		printf("Enter an integer : "); scanf("%d", &a[i]);
		tot += a[i];
	}
	max = a[1];
	min = a[1];
	
	for(i=0; i<5; i++){
		if(max<a[i]) max = a[i];
	}
	for(i=0; i<5; i++){
		if(min>a[i]) min = a[i];
	}
	
	avg = tot*0.2;
	printf("average = %.2f\n", avg);
	printf("min = %d\n", min);
	printf("max = %d\n", max);
}
