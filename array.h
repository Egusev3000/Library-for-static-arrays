#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

#define db double

void readArray(int[], int);
void readArray(double[], int);

void printArray(int[], int);
void printArray(double[], int);


void readArray(int[], int, ifstream&);
void readArray(double[], int, ifstream&);

void printArray(int[], int, ofstream&);
void printArray(double[], int, ofstream&);

void fillArray(int[], int, int = 0);
void fillArray(double[], int, double = 0);

void arrayCopy(int[], int, int[]);
void arrayCopy(double[], int, double[]);

void combineArrays(int[], int&, int[], int);
void combineArrays(double[], int&, double[], int);

void reverseArray(int[], int);
void reverseArray(double[], int);

int arraySum(int[], int);
double arraySum(double[], int);

long long  arrayProduct(int[], int);
double arrayProduct(double[], int);

double arrayMean(int[], int);
double arrayMean(double[], int);

int arrayMin(int[], int, bool = true);
int arrayMin(double[], int, bool = true);

int arrayMax(int[], int, bool = true);
int arrayMax(double[], int, bool = true);

int arrayFind(int[], int, int, int = 0);
int arrayFind(double[], int, double, int = 0);

void insertInArray(int[], int&, int, int);
void insertInArray(double[], int&, int, double);

void eraseFromArray(int[], int&, int);
void eraseFromArray(double[], int&, int);

void sortArray(int[], int, bool = true);
void sortArray(double[], int, bool = true);

void matrixMultiplier(int[][100], int, int, int[][100], int, int, int[][100]);

int minSumArray(int[][100], int, int, bool = true);

bool isArraySymmetrical(int[][100], int);