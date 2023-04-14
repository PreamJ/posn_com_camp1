#include<stdio.h>
#include<string.h>
int main(){
	char a[50], b[50];
	printf("Input String = "); gets(a);
	strcpy(b,a);
	strrev(a);
	if(strcmp(a,b)==0) printf("%s is a Palindrome", a);
	else printf("%s is not a Palindrome", a);
}
