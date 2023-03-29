#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(){
	char id[20], pos = 0; int newid[16], sum, tot=0;
	printf("Enter cradit card number : "); gets(id);
	strrev(id); 
	for(int i=0; i<19; i++){
		if(id[i]!='-'){
			newid[pos++] = (int)id[i]-48;
		}
	}
	for(int i=1; i<16; i+=2){
		newid[i]*=2;
		sum = newid[i]/10 + newid[i]%10;
		tot += sum;
		}
	for(int i=0; i<16; i+=2){
		tot += newid[i];
	}
	if(tot%10==0)printf("card is valid");
	else printf("card is unvalid");
}
