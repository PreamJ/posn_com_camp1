#include<stdio.h>
int main(){
	int year, month, day;
	printf("Enter year : "); scanf("%d", &year);
	year -=543;
	printf("Enter month : "); scanf("%d", &month);
	if(month == 1) printf("31");
	if(month == 2){
		if(year%4==0 && year%100!=0 || year%400==0){
			printf("29");
		}
		else printf("28");
	}
	if(month == 3) printf("31");
	if(month == 4) printf("30");
	if(month == 5) printf("31");
	if(month == 6) printf("30");
	if(month == 7) printf("31");
	if(month == 8) printf("31");
	if(month == 9) printf("30");
	if(month == 10) printf("31");
	if(month == 11) printf("30");
	if(month == 12) printf("31");
}
