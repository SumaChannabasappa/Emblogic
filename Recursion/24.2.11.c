#include<stdio.h>
int hcf(int num1, int num2);

int main() 
{
	int num1, num2;

	// Input the two numbers from the user
	printf("Enter the first number: ");
	scanf("%d", &num1);

	printf("Enter the second number: ");
	scanf("%d", &num2);

	// Calculate and display the HCF
	printf("The HCF of %d and %d is: %d\n", num1, num2, hcf(num1, num2));

	return 0;
}

// Recursive function to calculate the HCF using Euclidean algorithm
int hcf(int num1, int num2) 
{
	if (num2 != 0) 
	{
		return hcf(num2, num1 % num2);
	} 
	else 
	{

		return num1;
	}
}

