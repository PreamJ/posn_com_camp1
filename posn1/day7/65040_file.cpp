#include<stdio.h>
int main(){
	FILE *posn;
	int i;
	int a;
	posn = fopen("c:\\001.txt", "w");
	for(i=0; i<10; i++){
		printf("Enter number(%d) : ", i+1); scanf("%d", &a);
		fprintf(posn," %d\n", a);
	}
	fclose(posn);
}
