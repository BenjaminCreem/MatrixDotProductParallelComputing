#include<stdio.h>
#include<stdlib.h>

double* mvp(double** mat, double* vec, int n);
void freeMat(double** mat, int n);
void allocMat(double** mat, int n);
void allocVec(double* vec, int n);
void assignMat(double** mat, int n);
void assignVec(double* vec, int n);
void printMatVec(double** mat, double* vec, int n);

