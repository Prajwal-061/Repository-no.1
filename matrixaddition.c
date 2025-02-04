#include <stdio.h>

int main()
{
	int a[3][3], b[3][3], sum[3][3];
	int r, c;

	// Input for matrix a
	printf("Enter the values of matrix a:\n");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			scanf("%d", &a[r][c]);
		}
	}

	// Display matrix a
	printf("The values present in matrix a:\n");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("%d\t", a[r][c]);
		}
		printf("\n");
	}

	// Input for matrix b
	printf("Enter the values of matrix b:\n");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			scanf("%d", &b[r][c]);
		}
	}

	// Display matrix b
	printf("The values present in matrix b:\n");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("%d\t", b[r][c]);
		}
		printf("\n");
	}

	// Calculate the sum of matrices a and b
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			sum[r][c] = a[r][c] + b[r][c];
		}
	}

	// Display the sum matrix
	printf("The sum of matrix a and b is:\n");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("%d\t", sum[r][c]);
		}
		printf("\n");
	}

	return 0;
}