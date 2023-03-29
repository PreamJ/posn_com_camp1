#include<stdio.h>
#include <math.h>
int main(){
	int n, x, i=1;
	printf("Enter the value : "); scanf("%d", &n);
	for(i==1; i<=n; i++){
		x = pow(2,i);
		printf("%d	%d\n",i, x );
	}
}
