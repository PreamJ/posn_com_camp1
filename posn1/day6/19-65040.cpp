#include<stdio.h>
#include<string.h>
int main(){
	char string[21];
	int len, vowal=0, alpha=0, num=0;
	printf("Input String: ");
	gets(string);
	len = strlen(string);
	for(int i=0; i<len; i++){
		if((string[i]=='a') || (string[i]=='e') || (string[i]=='i')|| (string[i]=='o')|| (string[i]=='u')) vowal++;
		else if((string[i]=='0') || (string[i]=='1') || (string[i]=='2') || (string[i]=='3') || (string[i]=='4') || (string[i]=='5') 
		|| (string[i]=='6') || (string[i]=='7') || (string[i]=='8') || (string[i]=='9')) num++;
		else alpha++;
	}
	printf("There are %d numbers\n", num);
	printf("There are %d alphabet\n", alpha);
	printf("There are %d vowal\n", vowal);
	return 0;
}
