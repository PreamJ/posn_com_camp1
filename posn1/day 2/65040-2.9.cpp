#include<stdio.h>
int main(){
	int time, day, hour, min, sec, remain;
	printf("Enter Second of Times : ");scanf("%d",&time);
	day = time/86400;
	remain = time%86400;
	hour = remain/3600;
	remain = remain%3600;
	min = remain/60;
	remain = remain%60;
	sec = remain;
	if(day == 0){
		printf("%d hours %d minutes %d sec", hour, min, sec);
	}
	else if(hour == 0){
		printf("%d minutes %d sec", min, sec);
	}
	else if(min == 0){
		printf("%d sec", sec);
	}
	else{
	printf("%d day %d hours %d minutes %d sec", day, hour, min, sec);
	}
}
