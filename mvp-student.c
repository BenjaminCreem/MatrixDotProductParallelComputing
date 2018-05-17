#include <stdio.h>
#include <stdlib.h>
#include "mvp-Header.h"

int main(int argc, char *argv[]){
	int n = 5; //matrix is n x n
	double** matrix;
	double* vector;
	
	//Allocating Memory and Assigning Values
	allocMat(matrix, n);
	allocVec(vector, n);
	assignMat(matrix, n);
	//assignVec(vector, n);

	//Finding Dot Product and Printing
	mvp(matrix, vector, n);
	printMatVec(matrix, vector, n);

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
void allocMat(double** mat, int n)
{
	mat= malloc(n*sizeof(*mat));
	for(int i=0; i<n; i++)
	{
		mat[i]=malloc(n*sizeof(*mat[i]));
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
void allocVec(double* vec, int n)
{
	vec=malloc(n*sizeof(double));
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
void printMatVec(double** mat, double* vec, int n)
{
	
}

//Calculate matrix dot vector
double* mvp(double **mat, double* vec, int n)
{

}

 
