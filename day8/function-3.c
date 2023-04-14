#include<stdio.h>
int n, check=1;
void prime(){
	for(int i=2; i<n/2; i++){
		if(n%i==0) check=0;
	}
	if(n==1 || n==0) check=0;
	if(check==1) printf("yes");
	else printf("no"); 
}
int main(){
	printf("Enter the number : ");
	scanf("%d", &n);
	prime();
}
