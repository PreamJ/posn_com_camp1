#include<stdio.h>
#include<math.h>
int n;
void armstrong(){
	int a; a = n/1000;
	int b; b = (n-1000*a)/100;
	int c; c = (n-1000*a-100*b)/10;
	int d; d = n%10;
	if(pow(a,3)+pow(b,3)+pow(c,3)+pow(d,3) == n) printf("Yes");
	else printf("No");
}
int main(){
	printf("Enter an integer : "); scanf("%d", &n);
	armstrong();
}
