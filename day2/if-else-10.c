#include<stdio.h>
int main(){
	int unit, tot = 0;
	printf("Total usage : ");scanf("%d", &unit);
	if(unit>0){
		if (unit<=10) tot += unit*5;
		else tot = 10*5;
		unit -= 10;
	}
	if(unit>0){
		if (unit<=40) tot += unit*10;
		else tot += 40*10;
		unit -= 40;
	}
	if(unit>0){
		if (unit<=50) tot += unit*12;
		else tot += 50*12;
		unit -= 50;
	}
	if(unit>0){
		if (unit<=400) tot += unit*15;
		else tot += 400*15;
		unit -= 400;
	}
	if(unit>0){
		if (unit<=500) tot += unit*18;
		else tot += 500*18;
		unit -= 500;
	}
	if(unit>0){
		if (unit<=4000) tot += unit*20;
		else tot += 4000*20;
		unit -= 4000;
	}
	if(unit>0){
		tot += unit*21;
	}
	printf("Total Amount : %d", tot);
}
