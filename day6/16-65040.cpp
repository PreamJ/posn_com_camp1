#include<stdio.h>
#include<string.h>
int main(){
	char a[21], b[21], c[21], d[21];
	int len;
	printf("Enter text 1: ");
	scanf("%s", a);
	printf("Enter text 2: ");
	scanf("%s", b);
	printf("Enter text 3: ");
	scanf("%s", c);
	printf("Enter text 4: ");
	scanf("%s", d);
	

	
	printf("%s: ", a);
	printf("%d\n", strlen(a));
	printf("%s: ", b);
	printf("%d\n", strlen(b));
	printf("%s: ", c);
	printf("%d\n", strlen(c));
	printf("%s: ", d);
	printf("%d\n", strlen(d));
	
}
