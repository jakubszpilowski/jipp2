//
// Created by Lenovo on 22.10.2021.
//

#ifndef JIPP2_MATRIXLIB_H
#define JIPP2_MATRIXLIB_H

#include <iostream>
#include <limits>

using namespace std;

//Poniższe funkcje operują na macierzach całkowitych, dokumentacja w pliku matrixLib.cpp
int **addMatrix(int **A, int **B, int r, int c);
int **subtractMatrix(int **A, int **B, int r, int c);
int **multiplyMatrix(int **A, int **B, int r, int c1, int c2);
int **multiplyByScalar(int **A, int r, int c, int s);
int **transpozeMatrix(int **A, int r, int c);
int **powerMatrix(int **A, unsigned p, int r, int c);
int determinantMatrix(int **A, int r);
bool matrixIsDiagonal(int **A, int r, int c);
void swap(int &a, int &b);
void sortRow(int *tab, int c);
void sortRowsInMatrix(int **A, int r, int c);

//Poniższe funkcje operują na macierzach zmiennoprzecinkowych, dokumentacja w pliku matrix.cpp
double **addMatrix(double **A, double **B, int r, int c);
double **subtractMatrix(double **A, double **B, int r, int c);
double **multiplyMatrix(double **A, double **B, int r, int c1, int c2);
double **multiplyByScalar(double **A, int r, int c, double s);
double **transpozeMatrix(double **A, int r, int c);
double **powerMatrix(double **A, unsigned p, int r, int c);
double determinantMatrix(double **A, int r);
bool matrixIsDiagonal(double **A, int r, int c);
void swap(double &a, double &b);
void sortRow(double *tab, int c);
void sortRowsInMatrix(double **A, int r, int c);

//Funkcje pomocnicze, które nie znajdują się w konspekcie
int **defineMatrix(int rows, int cols);
void deleteMatrix(int **A, int r);
void showMatrix(int **A, int r, int c);
void subMatrix(int **A, int **subA, int p, int q, int r);
void fillMatrix(int **A, int r, int c);

double **defineMatrix(int rows, int cols, int tmp);
void deleteMatrix(double **A, int r, int tmp);
void showMatrix(double **A, int r, int c);
void subMatrix(double **A, double **subA, int p, int q, int r);
void fillMatrix(double **A, int r, int c);

//Funkcja wyświetlająca dokumentacje
void showHelp();

#endif //JIPP2_MATRIXLIB_H
