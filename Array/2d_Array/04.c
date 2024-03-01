/* Transpose of matrix */

#include<stdio.h>
#define Row 3
#define Col 4

int main(void)
{

	int i,j,mat1[Row][Col],mat2[Col][Row];
	printf("Enter the mat1[%d][%d] Row-wise\n",Row,Col);
	for(i=0;i<Row;i++)
		for(j=0;j<Col;j++)
			scanf("%d",&mat1[i][j]);

	printf("The resultent transpose of matrix is: \n");
	for(i=0;i<Col;i++)
		for(j=0;j<Row;j++) 
			mat2[i][j]=mat1[j][i];

	printf("Printing the result of the matrix:\n");
	for(i=0;i<Col;i++)
	{
		for(j=0;j<Row;j++)
			printf("%5d",mat2[i][j]);
		printf("\n");
	}
}
