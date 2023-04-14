#include<stdio.h>
int main(){
	int num, last;
	printf("Enter your number: ");scanf("%d", &num);
	last = num%10;
	if(last == 1){
		printf("One");
	}
	else if(last == 2){
		printf("Two");
	}
	else if(last == 3){
		printf("Three");
	}
	else if(last == 4){
		printf("Four");
	}
	else if(last == 5){
		printf("Five");
	}
	else if(last == 6){
		printf("Six");
	}
	else if(last == 7){
		printf("Seven");
	}
	else if(last == 8){
		printf("Eight");
	}
	else if(last == 9){
		printf("Nine");
	}
	else if(last == 0){
		printf("Zero");
	}
}
