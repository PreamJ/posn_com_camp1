#include<stdio.h>
int n;
void perfect(){
	int sum=0;
	for(int i=1; i<=n/2; i++){
		if(n%i==0) sum+=i;
	}
	if(sum == n) printf("Yes");
	else printf("No");
}
int main(){
	printf("Enter a number : "); scanf("%d", &n);
	perfect();
}
