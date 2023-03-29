#include<stdio.h>
int main(){
	float area, cost;
	printf("Please input area : ");scanf("%f", &area);
	if(area <80){
		cost = area*12.5;
		printf("Total service costs %.2f baht", cost);
	}
	else if(area<200){
		cost = area*10;
		printf("Total service costs %.2f baht", cost);
	}
	else if(area<400){
		cost = area*7.5;
		printf("Total service costs %.2f baht", cost);
	}
	else{
		cost = area*5;
		printf("Total service costs %.2f baht", cost);
	}
}
