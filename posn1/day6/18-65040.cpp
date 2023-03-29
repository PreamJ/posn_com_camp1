#include<stdio.h>
#include<string.h>
int main(){
	char name[21], lastname[21], gender[7];
	printf("Enter first name : "); scanf("%s", name);
	printf("Enter last name : "); scanf("%s", lastname);
	printf("Enter your gender(male or female) : "); scanf("%s", gender);
	// strcmp(gender, "")==0
	if(strcmp(gender, "male")==0) strcpy(gender,"Mr.");
	if(strcmp(gender, "female")==0) strcpy(gender, "Mrs.");
	printf("%s %s %s", gender, name, lastname);
}
