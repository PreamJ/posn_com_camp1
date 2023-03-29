#include<stdio.h>
int main(){
	int id, salary, ot, net, bonus;
	printf("Enter your id number: ");scanf("%d", &id);
	printf("Enter your base salary: ");scanf("%d", &salary);
	printf("Enter your over time: "); scanf("%d", &ot);
	net = salary+ot;
	if(net>=100000){
		bonus = net*0.1;
		printf("Your bonus is %d\n",bonus);
	}
	else if(net>=70000){
		bonus = net*0.07;
		printf("Your bonus is %d\n",bonus);
	}
	else if(net>=50000){
		bonus = net*0.05;
		printf("Your bonus is %d\n",bonus);
	}
	else if(net>=30000){
		bonus = net*0.03;
		printf("Your bonus is %d\n",bonus);
	}
	else{
		bonus = net*0.01;
		printf("Your bonus is %d\n", bonus);
	}
}
