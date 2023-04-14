#include<stdio.h>
int main(){
	char a, NewA;
	printf("Enter your character: ");scanf("%c", &a);
	if(a>=65 && a<=90){
		NewA = a+32;
		printf("%c", NewA);
	}
	else if(a>=97 && a<=122){
		NewA = a-32;
		printf("%c", NewA);
	}
	else{
		printf("error");
	}
}
