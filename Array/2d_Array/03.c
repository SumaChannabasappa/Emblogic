/* Multiplication of two matrix */

#include<stdio.h>
#define Row1 3
#define Col1 4
#define Row2 Col1
#define Col2 2

int main(void)
{

	int i,j,k,mat1[Row1][Col1],mat2[Row2][Col2],mat3[Row1][Col2];
	printf("Enter the mat1[%d][%d] Row-wise\n",Row1,Col1);
	for(i=0;i<Row1;i++)
	{
		for(j=0;j<Col1;j++)
			scanf("%d",&mat1[i][j]);
		printf("\n");
	}

	printf("Enter the mat2[%d][%d] Row-wise\n",Row2,Col2);
	for(i=0;i<Row2;i++)
	{
		for(j=0;j<Col2;j++)
			scanf("%d",&mat2[i][j]);
		printf("\n");
	}

	printf("The resultent multiplication of matrix is: \n");
	for(i=0;i<Row1;i++)
		for(j=0;j<Col2;j++)
		{
			mat3[i][j]=0;
			for(k=0;k<Col1;k++)
				mat3[i][j] += mat1[i][k] *mat2[k][j];
		}

	printf("Printing the result of the matrix:\n");
	for(i=0;i<Row1;i++)
	{
		for(j=0;j<Col2;j++)
			printf("%5d",mat3[i][j]);
		printf("\n");
	}
}
