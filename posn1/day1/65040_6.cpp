#include<stdio.h>
int main(){
	float bmi, w, h;
	printf("Enter your weight in Kilograms(kg): "); scanf("%f", &w);
	printf("Enter your height in Meters(m): "); scanf("%f", &h);
	bmi = w/(h*h);
	printf("Your BMI is %f", bmi);
}