#include<stdio.h>
#include<math.h>
void function(){
	double rad;
	printf("sin			cos			tan\n");
	for(float i=0; i<=90; i+=5){
		rad = (i/180)*3.14;
		printf("%f		%f		%f\n", sin(rad), cos(rad), tan(rad));
	}
}
int main(){
	function();
}
