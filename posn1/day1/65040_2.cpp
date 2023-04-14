#include<stdio.h>
int main(){
	int height, base, area;
	printf("Enter height: "); scanf("%d", &height);
	printf("Enter base: ");scanf("%d",&base);
	area = 0.5*base*height;
	printf("The area of triangle is %d", area);
}