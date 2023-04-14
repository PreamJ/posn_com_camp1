#include<stdio.h>
#include<string.h>

int main(){
	char input[2][50]={0};
	int len1, len2;
	printf("Input String1 : "); gets(input[0]);
	printf("Input String2 : "); gets(input[1]);
	len1 = strlen(input[0]);
	len2 = strlen(input[1]);
	printf("\nResult of Even Position		= ");
	for(int i=1; i<(len1+len2)/2; i+=2){
		for(int j=0; j<2; j++){
			printf("%c", input[j][i]);
		}
	}
	printf("\nResult of Odd Position	 	= ");
	for(int i=0; i<(len1+len2)/2 +1 ; i+=2){
		for(int j=0; j<2; j++){
			printf("%c", input[j][i]);
		}
	}
	printf("\nResult of String 1&2		= ");
	for(int i=0; i<(len1+len2); i++){
		for(int j=0; j<2; j++){
			printf("%c", input[j][i]);
		}
	}
	printf("\nResult of Upper String 1&2	= ");
	for(int i=0; i<(len1+len2); i++){
		for(int j=0; j<2; j++){
			if(input[j][i]>=97 && input[j][i]<=122){
				printf("%c", input[j][i]-32);
			}
			else printf("%c", input[j][i]);
		}
	}
	printf("\nResult of Lower String 1&2	= ");
	for(int i=0; i<(len1+len2); i++){
		for(int j=0; j<2; j++){
			if(input[j][i]>=65 && input[j][i]<=90){
				printf("%c", input[j][i]+32);
			}
			else printf("%c", input[j][i]);
		}
	}
	printf("\nResult of Reverse String 1&2	= ");
	for(int i=0; i<(len1+len2); i++){
		for(int j=0; j<2; j++){
			if(input[j][i]>=65 && input[j][i]<=90){
				printf("%c", input[j][i]+32);
			}
			else if(input[j][i]>=97 && input[j][i]<=122)
			printf("%c", input[j][i]-32);
		}
	}
}
