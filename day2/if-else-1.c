#include<stdio.h>
int main() {
	float a, b, c, d, avg;
	printf("Enter your first score: ");scanf("%f", &a);
	printf("Enter your second score: ");scanf("%f",&b);
	printf("Enter your third score: ");scanf("%f", &c);
	printf("Enter your fourth score: ");scanf("%f", &d);
	if((a<0||a>100)||(b<0||b>100)||(c<0||c>100)||(d<0||d>100)){
		printf("Invalid input!");
	}
	else {
		avg = (a+b+c+d)*0.25;
		printf("\naverage score is %.2f", avg);
	}

}
