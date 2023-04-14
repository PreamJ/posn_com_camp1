#include<stdio.h>
int main(){
	int ad, be,ad1,ad2,ad3,ad4,be1,be2,be3,be4,remain1,remain2, all;
	printf("Enter Anno Domini year: ");scanf("%d", &ad);
	be = ad+543;
	ad1 = ad/1000;
	remain1 = ad%1000;
	ad2 = remain1/100;
	remain1 %= 100;
	ad3 = remain1/10;
	remain1 %= 10;
	ad4 = remain1;
	
	be1 = be/1000;
	remain2 = be%1000;
	be2 = remain2/100;
	remain2 %= 100;
	be3 = remain2/10;
	remain2 %= 10;
	be4 = remain2;
	
	all = ad1+ad2+ad3+ad4+be1+be2+be3+be4;
	printf("The result is %d", all);
}