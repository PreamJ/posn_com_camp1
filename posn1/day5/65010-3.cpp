#include<stdio.h>
#include<math.h>
int main(){
	long input;
	int rev=0;
	printf("Enter the number : "); scanf("%d", &input);
	while(input!=0){
		rev = rev*10 + (input%10);
		input /= 10;
	}
	printf("%d", rev);
}
