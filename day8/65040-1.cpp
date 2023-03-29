#include<stdio.h>
int x, y;
void function(){
	y = x*x+1;

}
int main(){
	printf("Enter x value : ");
	scanf("%d", &x);
	function();
	printf("f(x) = %d", y);
	return 0;
}
