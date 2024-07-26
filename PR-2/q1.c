#include <stdio.h>

int main() {
	int score;
	char grade;

	printf("Enter the value for score: ");
	scanf("%d", &score);

	grade = (score >= 91 && score <= 100)
			? 'A'
			: (score >= 81 && score <= 90) 
				? 'B'
				: (score >= 71 && score <= 80) 
					? 'C'
					: (score >= 61 && score <= 70) 
						? 'D'
						: (score >= 51 && score <= 60) 
							? 'E'
							: 'F';

	printf("\nGrade = %c\n", grade);

	printf("Enter your grade: ");
	scanf(" %c", &grade);

	switch (grade) {
		case 'A':
		case 'a':
			printf("\nExcellent work!\n");
			break;

		case 'B':
		case 'b':
			printf("\nWell done\n");
			break;

		case 'C':
		case 'c':
			printf("\nGood job\n");
			break;

		case 'D':
		case 'd':
			printf("\nYou passed, but you could do better\n");
			break;

		case 'E':
		case 'e':
			printf("\nYou need to improve\n");
			break;

		case 'F':
		case 'f':
			printf("\nSorry, you failed\n");
			break;

		default:
			printf("\nEnter a valid grade\n");
			break;
	}

	if (grade >= 'A' && grade <= 'D' || grade >= 'a' && grade <= 'd') {
		printf("Excellent work!\n");
	} else {
		printf("Please try again next time\n");
	}

	return 0;
}