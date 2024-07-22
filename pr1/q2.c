#include <stdio.h>

int main() {
	float HRA, DA, TA, hra, da, ta, salary;

	printf("Enter the base salary: ");
	scanf("%f", &salary);
	printf("Enter the value for salary: ");
	printf("Enter the value for HRA: ");
	scanf("%f", &HRA);
	printf("Enter the value for DA: ");
	scanf("%f", &DA);
	printf("Enter the value for TA: ");
	scanf("%f", &TA);
	
	

	hra = (HRA * salary) / 100;
	da = (DA * salary) / 100;
	ta = (TA * salary) / 100;

	salary = salary + hra + da + ta;

	printf("Your gross salary is %f\n", salary);

	return 0;
}