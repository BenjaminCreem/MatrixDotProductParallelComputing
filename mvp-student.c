#include <stdio.h>
#include <stdlib.h>
#include "mvp-Header.h"

int main(int argc, char *argv[]){
	int n = 5; //matrix is n x n
	double** matrix;
	double* vector;
	
	//Allocating Memory and Assigning Values
	matrix = allocMat(matrix, n);
	vector = allocVec(vector, n);
	assignMat(matrix, n);
	assignVec(vector, n);

	//Finding Dot Product and Printing
	double* result = mvp(matrix, vector, n);
	printMatVec(matrix, vector, result, n);

	//Free Memory
	//freeMat(matrix, n);
	//free(vector);
	return 0;
}


//Free memory used by first matrix
void freeMat(double** mat, int n)
{
	for(int i=0; i<n; i++)
	{
		free(mat[i]);
	}
	free(mat);
}

//Allocate memory for first matrix
double** allocMat(double** mat, int n)
{
	mat= (double**)malloc(n*sizeof(*mat));
	for(int i=0; i<n; i++)
	{
		mat[i]=(double*)malloc(n*sizeof(*mat[i]));
	}
}

//Assign values to first matrix
void assignMat(double** mat, int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			mat[i][j] = 1;
		}
	}	
}

//Allocate memory for vector
double* allocVec(double* vec, int n)
{
	vec=(double*)malloc(n*sizeof(double));
	return vec;
}

//Assign values to vector
void assignVec(double* vec, int n)
{
	for(int i=0; i<n; i++)
	{
		vec[i]=2;
	}
}

//Print matrix dot vector
void printMatVec(double** mat, double* vec, double* mvp, int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%f ", mat[i][j]);
		}
		printf("* %f ", vec[i]);
		printf("= %f \n", mvp[i]);
	}
}

//Calculate matrix dot vector
double* mvp(double **mat, double* vec, int n)
{
	//Return matrix
	double* mvp = (double*)malloc(n * sizeof(double));

	//Find dot product
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			mvp[i] += mat[j][i] * vec[i];
		}
	}
}

 
