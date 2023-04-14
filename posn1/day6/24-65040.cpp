#include<stdio.h>
#include<string.h>
int main(){
	char string[256], border;
	int height, width, bwidth, lenst;
	printf("Input string	  ==> "); scanf("%s", string);
	printf("Height String	  ==> "); scanf("%d", &height);
	printf("Width String	  ==> "); scanf("%d", &width);
	printf("Border Character  ==> "); scanf("%s", &border);
	printf("Border Width 	  ==> "); scanf("%d", &bwidth);
	lenst = strlen(string);
	for(int j=0; j<bwidth; j++){
		for(int i=0; i<(lenst*width)+(2*bwidth); i++){
			printf("%c", border);
		}
		printf("\n");
	}
	
	for(int i=0; i<height; i++){
		for(int j=0; j<bwidth; j++){
			printf("%c", border);
		}
		for(int j=0; j<width; j++){
			printf("%s", string);
		}
		for(int j=0; j<bwidth; j++){
			printf("%c", border);
		}
		printf("\n");
		}
	for(int j=0; j<bwidth; j++){
		for(int i=0; i<(lenst*width)+(2*bwidth); i++){
			printf("%c", border);
		}
		printf("\n");
	}
}
