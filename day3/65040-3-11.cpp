#include<stdio.h>
int main(){
	int a, z, b, y;
	//a is what day 
	//b is number of day in month
	printf("Enter what day it is : ");scanf("%d",&z);
	printf("Enter the number of day in month : "); scanf("%d",&b);
	a = z-1;
	for(int j=1; j<=a; j++){
		printf("%4s"," ");
	}
	for(int k=1; k<=7-a && k<=b; k++){
		printf("%4d", k);
	}
	printf("\n");
	for(int k=7-a+1; k<=14-a && k<=b; k++){
		printf("%4d", k);
	}
	printf("\n");
	for(int k=7+7-a+1; k<=21-a && k<=b; k++){
		printf("%4d", k);
	}
	printf("\n");
	for(int k=7+7+7-a+1; k<=28-a && k<=b; k++){
		printf("%4d", k);
	}
	printf("\n");
	for(int k=7+7+7+7-a+1; k<=35-a && k<=b; k++){
		printf("%4d", k);
	}
	printf("\n");
	for(int k=7+7+7+7+7-a+1; k<=42-a && k<=b; k++){
		printf("%4d", k);
	}
	printf("\n");
}
