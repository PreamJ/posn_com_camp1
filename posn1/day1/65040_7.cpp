#include<stdio.h>
int main(){
	int money, b1000, b500, b100, b20, remain;
	printf("How much are you want to withdraw: ");scanf("%d", &money);
	b1000 = money/1000;
	remain = money%1000;
	b500 = remain/500;
	remain %= 500;
	b100 = remain/100;
	remain %= 100;
	b20 = remain/20;
	printf("B1000 = %d\nB500 = %d\nB100 = %d\nB20 = %d", b1000, b500, b100, b20);
}