#include <stdio.h>

int main() {
	printf("Enter your month (12,1,2 are Winter, 3-5 are Spring, 6-8 are Summer, 9-11 are Autumn):\n");
	int month;
	scanf("%d", &month);
	(month==12)? month=0:0;
	int m = month/3;
	switch (m) {
		case 0: printf("Winter"); break;
		case 1: printf("Spring"); break;
		case 2: printf("Summer"); break;
		case 3: printf("Autumn"); break;
		default: printf("month out of bounds"); break;
	}
	printf("\n");
}
