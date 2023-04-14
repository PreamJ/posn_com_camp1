#include<stdio.h>
int main(){
	int j=0, i=0, n, colThis = 1, colMax = 1;
	char al;
	al = 65;
	printf("Enter number: "); scanf("%d", &n);
	printf("\n");
	for(i=0; i<n; i++){
		if(al<=90){
			printf("%c", al);
			if (colThis++ == colMax) {
				printf("\n");
				colMax++;
				colThis = 1;
			}
		}
		else al=64;        
		al += 1;
	}
	
}
