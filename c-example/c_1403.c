#include<stdio.h>
#include<stdlib.h>

// passing arrays to function
double getAverage(int **,int,int);
double getAverage(int **a,int row,int col)
{
	int sum=0;
	int size;
	size = row *col;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			sum += a[i][j];
			printf("a[%d][%d] = %d , sum = %d\n",i,j,a[i][j],sum);
		}
	}
	return (double)sum / size;
}

int main()
{
	// Caculate row and col of array
	int a[2][3] = {{1,2,3},{2,3,4}};
	int row = sizeof(a)/sizeof(a[0]);
	int col = sizeof(a[0]) / sizeof(a[0][0]);
	printf("row = %d, col = %d\n",row,col );

	// allocate memory for array 2 dimension and pass to function
	int rows = 5,cols =3;
	int **x;
	x = malloc(rows * sizeof(*x));
	for (int i = 0; i < rows; ++i)
	{
		x[i] = malloc(cols * sizeof(*x[i]));
	}
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			/* code */
			x[i][j] = rand()%10;
			printf("x[%d][%d] = %d\n",i,j,x[i][j]);
		}
	}
	double aver = getAverage(x,rows,cols);
	printf("Average of array: %f\n",aver );
}