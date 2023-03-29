#include<stdio.h>
int main(){
	int menu;
	float rad, cal;
	printf("Please input radius: ");scanf("%f", &rad);
	printf("Calculator Menu :\n\t1.Find area\n\t2.Find circumference");
	printf("\nChoose menu : ");scanf("%d", &menu);
	if(menu == 1){
		cal = 3.14*rad*rad;
		printf("Area is %f", cal);
	}
	else if(menu==2){
		cal = 3.14*2*rad;
		printf("Circumference is %f", cal);
	}
	else{
		printf("error");
	}
	}
