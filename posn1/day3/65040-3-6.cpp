#include<stdio.h>
int main(){
	char a, i;
	printf("Enter a character : ");
	scanf("%c", &a);
	if(a>=97 && a<=122){
		a -= 32;
	}
	i = a;
	for(i==a; i>=65; i--){
		printf("%c", i);
	}
}
