#include<stdio.h>
#include<math.h>
int main(){
	float x1, y1, x2, y2, distance;
	printf("Enter X1,Y1 : ");scanf("%f,%f", &x1, &y1);
	printf("Enter X2,Y2 : ");scanf("%f,%f", &x2, &y2);
	distance = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	printf("distance is %f", distance);
}