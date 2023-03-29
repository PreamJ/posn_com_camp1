#include<stdio.h>
#include<string.h>

int main(){
	char id[17];
	printf("Enter National id number : ");
	scanf("%s", id);
	for(int i=0; i<13; i++){
		if(i == 1 || i==5 || i==10 || i==12){
			printf("-");
			printf("%c", id[i]);
		}
		else printf("%c", id[i]);
	}
}
