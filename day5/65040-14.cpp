#include<stdio.h>
int main(){
	int roc, sci, pap;
	printf("Input probability of rock : "); scanf("%d", &roc);
	printf("Input probability of paper : "); scanf("%d", &sci);
	printf("Input probability of scissor: "); scanf("%d", &pap);
	if(roc+sci+pap != 100){
		printf("error");
	}
	else if(roc==sci || roc==pap || sci==pap){
		printf("i love you");
	}
	else if(roc+sci+pap == 100){
		if(roc>sci && roc>pap) printf("rock");
		else if(sci>roc && sci>pap) printf("scissors");
		else if(pap>roc && pap>sci) printf("rock");
		}
}
