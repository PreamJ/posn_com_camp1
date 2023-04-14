#include<stdio.h>
#include<math.h>
float a,b,c;
void function(){
	c = sqrt((a*a)+(b*b));
	printf("perimeter of triangle is %.2f", a+b+c);
}
int main(){
	printf("Enter length 1: ");
	scanf("%f", &a);
	printf("Enter length 2: ");
	scanf("%f", &b);
	function();
}
