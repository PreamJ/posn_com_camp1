#include<stdio.h>
#include<string.h>
int main(){
	char string[50], rev[50];
	int len=0, a=0, e=0, I=0, o=0, u=0;
	printf("Input String1    ==> "); gets(string);
	len = strlen(string); 
	printf("Length of String ==> %d Characters\n", len);
	strcpy(rev,string);
	printf("Reverse String   ==> %s\n", strrev(rev));
	
	for(int i=0; i<len; i++){
		if(string[i]>=97 && string[i]<=122) 
		string[i] -= 32;
	}
	printf("Upper String     ==> %s\n", string);
	
	for(int i=0; i<len; i++){
		if(string[i]=='A') a++;
		if(string[i]=='E') e++;
		if(string[i]=='I') I++;
		if(string[i]=='O') o++;
		if(string[i]=='U') u++;
	}
	printf("Number of vowel\n");
	printf("A or a = %d\n", a);
	printf("E or e = %d\n", e);
	printf("I or i = %d\n", I);
	printf("O or o = %d\n", o);
	printf("U or u = %d\n", u);
}
