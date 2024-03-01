/* Addition of two matrix */

#include<stdio.h>
#define Row 3
#define Col 4

int main(void)
{

	int i,j,mat1[Row][Col],mat2[Row][Col],mat3[Row][Col];
	printf("Enter the mat1[%d][%d] Row-wise\n",Row,Col);
	for(i=0;i<Row;i++)
		for(j=0;j<Col;j++)
			scanf("%d",&mat1[i][j]);

	printf("Enter the mat2[%d][%d] Row-wise\n",Row,Col);
	for(i=0;i<Row;i++)
		for(j=0;j<Col;j++)
			scanf("%d",&mat2[i][j]);

	printf("The resultent addition of matrix is: \n");
	for(i=0;i<Row;i++)
		for(j=0;j<Col;j++) 
			mat3[i][j]=mat1[i][j]+mat1[i][j];

	printf("Printing the result of the matrix:\n");
	for(i=0;i<Row;i++)
	{
		for(j=0;j<Col;j++)
			printf("%5d",mat3[i][j]);
		printf("\n");
	}
}
