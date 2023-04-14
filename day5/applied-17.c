#include<stdio.h>
#include<math.h>
int main(){
	int count, n, m, mod1, mod2, num[10] = {}, i; 
	printf("enter n : "); scanf("%d", &n);
	printf("enter m : "); scanf("%d", &m);
	for(i=n; i<=m; i++){
		if(i>=10){
		mod1 = floor(i/10);
		num[mod1]++;
		}
		mod2 = i%10;
		num[mod2]++;
	}
	for(int a=0; a<10; a++){
		printf("%d	%d\n", a, num[a]);
	}
	
}
