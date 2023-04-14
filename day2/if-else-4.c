#include<stdio.h>
int main(){
	int mid, fin, score;
	printf("Please enter your midterm score: ");scanf("%d", &mid);
	printf("Please enter your final score: ");scanf("%d", &fin);
	score = (mid+fin)*0.5;
	if(score<50){
		printf("Your Score = %d", score);
		printf("\nGrade = F, Fail");
	}
	else if(score<80){
		printf("Your Score = %d", score);
		printf("\nGrade = P, Pass");
	}
	else if(score<=100){
		printf("Your Score = %d", score);
		printf("\nGrade = G, Good");
	}
	else {
		printf("error");
	}
}
