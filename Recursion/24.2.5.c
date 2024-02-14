#include<stdio.h>

void calculateSum(int start, int end, int sumEven, int sumOdd);

int main() 
{
	int start, end, sumEven = 0, sumOdd = 0;

	printf("Enter the starting number of the range: ");
	scanf("%d", &start);

	printf("Enter the ending number of the range: ");
	scanf("%d", &end);

	calculateSum(start, end, sumEven, sumOdd);

	return 0;
}

// Recursive function to calculate the sum of even and odd numbers
void calculateSum(int start, int end, int sumEven, int sumOdd) 
{
	if (start <= end) 
	{
		if (start % 2 == 0) 
		{
			sumEven += start;
		} 
		else 
		{

			sumOdd += start;
		}

		// Recursive call for the next number in the range
		calculateSum(start + 1, end, sumEven, sumOdd);
	}

	else
	{
		printf("Sum of even numbers: %d\n", sumEven);
		printf("Sum of odd numbers: %d\n", sumOdd);

	}
}

