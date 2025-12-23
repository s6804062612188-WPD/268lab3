#include <stdio.h>

int main() {
	int score, printFlag;
	scanf("%d", &score);
	if (score < 0) {
		
	} else if (score > 100) {
		
	} else
		if (score >= 85) {
			printFlag = 4;
		} else if (score >= 75){
			printFlag = 3;
		} else if (score >= 68){
			printFlag = 2;
		} else if (score >= 55){
			printFlag = 1;
		} else {
			printFlag = 5;
		}
	
	switch (printFlag) {
		case 4: printf("A"); break;
		case 3: printf("B"); break;
		case 2: printf("C\n"); printf("You're %d short for B.", 75-score); break;
		case 1: printf("D"); break;
		case 5: printf("F"); break;
		default: printf("score error, something's wrong I can feel it"); break;
	}
	printf("\n");
}
