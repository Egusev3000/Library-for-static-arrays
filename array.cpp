#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

#define db double

void readArray(int data[], int size)
{
	for (int i = 0; i < size; i++)
		cin >> data[i];
}

void readArray(double data[], int size)
{
	for (int i = 0; i < size; i++)
		cin >> data[i];
}

void printArray(int data[], int size) {
	for (int i = 0; i < size; i++) {
		cout << data[i] << " ";
	}
}

void printArray(double data[], int size) {
	for (int i = 0; i < size; i++) {
		cout << data[i] << " ";
	}
}


void readArray(int data[], int size, ifstream& in) {
	for (int i = 0; i < size; i++) {
		in >> data[i];
	}
}

void readArray(double data[], int size, ifstream& in) {
	for (int i = 0; i < size; i++) {
		in >> data[i];
	}
}

void printArray(int data[], int size, ofstream& out) {
	for (int i = 0; i < size; i++) {
		out << data[i] << " ";
	}
}

void printArray(double data[], int size, ofstream& out) {
	for (int i = 0; i < size; i++) {
		out << data[i] << " ";
	}
}

void fillArray(int data[], int size, int value) {
	for (int i = 0; i < size; i++) {
		data[i] = value;
	}
}

void fillArray(double data[], int size, double value) {
	for (int i = 0; i < size; i++) {
		data[i] = value;
	}
}

void arrayCopy(int data1[], int size, int data2[])
{
	for (int i = 0; i < size; i++)
		data2[i] = data1[i];
}

void arrayCopy(double data1[], int size, double data2[])
{
	for (int i = 0; i < size; i++)
		data2[i] = data1[i];
}

void combineArrays(int data1[], int& size1, int data2[], int size2)
{
	for (int i = 0; i < size2; i++)
		data1[i + size1] = data2[i];
	size1 += size2;
}

void combineArrays(double data1[], int& size1, double data2[], int size2)
{
	for (int i = 0; i < size2; i++)
		data1[i + size1] = data2[i];
	size1 += size2;
}

void reverseArray(int data[], int size) {
	for (int i = 0; i < size / 2; i++) {
		int temp = data[i];
		data[i] = data[size - 1 - i];
		data[size - 1 - i] = temp;
	}
}

void reverseArray(double data[], int size) {
	for (int i = 0; i < size / 2; i++) {
		double temp = data[i];
		data[i] = data[size - 1 - i];
		data[size - 1 - i] = temp;
	}
}

int arraySum(int data[], int size) {
	long long s = 0;
	for (int i = 0; i < size; i++) {
		s = s + data[i];
	}
	return s;
}

double arraySum(double data[], int size) {
	double s = 0.0;
	for (int i = 0; i < size; i++) {
		s = s + data[i];
	}
	return s;
}

long long  arrayProduct(int data[], int size) {
	long long int s = 1;
	for (int i = 0; i < size; i++) {
		s *= data[i];
	}
	return s;
}

double arrayProduct(double data[], int size) {
	double s = 1;
	for (int i = 0; i < size; i++) {
		s *= data[i];
	}
	return s;
}

double arrayMean(int data[], int size) {
	double s = 0;
	double z;  for (int i = 0; i < size; i++) {
		s = s + data[i];
	}
	z = s / size;  return z;
}
double arrayMean(double data[], int size) {
	double s = 0.0, a;
	for (int i = 0; i < size; i++) {
		s = s + data[i];
	}  a = s / size;
	return a;
}

int arrayMin(int data[], int size, bool is_first)
{
	int mn_ind = 0;
	if (is_first)
	{
		for (int i = 0; i < size; i++)
			if (data[i] < data[mn_ind])
				mn_ind = i;
		return mn_ind;
	}
	for (int i = 0; i < size; i++)
		if (data[i] <= data[mn_ind])
			mn_ind = i;
	return mn_ind;
}

int arrayMin(double data[], int size, bool is_first)
{
	int mn_ind = 0;
	if (is_first)
	{
		for (int i = 0; i < size; i++)
			if (data[i] < data[mn_ind])
				mn_ind = i;
		return mn_ind;
	}
	for (int i = 0; i < size; i++)
		if (data[i] <= data[mn_ind])
			mn_ind = i;
	return mn_ind;
}

int arrayMax(int data[], int size, bool is_first)
{
	int mx_ind = 0;
	if (is_first)
	{
		for (int i = 0; i < size; i++)
			if (data[i] > data[mx_ind])
				mx_ind = i;
		return mx_ind;
	}
	for (int i = 0; i < size; i++)
		if (data[i] >= data[mx_ind])
			mx_ind = i;
	return mx_ind;
}

int arrayMax(double data[], int size, bool is_first)
{
	int mx_ind = 0;
	if (is_first)
	{
		for (int i = 0; i < size; i++)
			if (data[i] > data[mx_ind])
				mx_ind = i;
		return mx_ind;
	}
	for (int i = 0; i < size; i++)
		if (data[i] >= data[mx_ind])
			mx_ind = i;
	return mx_ind;
}

int arrayFind(int data[], int size, int value, int begin)
{
	for (int i = begin; i < size; i++)
		if (data[i] == value)
			return i;
	return -1;
}

int arrayFind(double data[], int size, double value, int begin)
{
	for (int i = begin; i < size; i++)
		if (data[i] == value)
			return i;
	return -1;
}

void insertInArray(int data[], int& size, int position, int num)
{
	size++;
	for (int i = size - 1; i >= position; i--)
		data[i] = data[i - 1];
	data[position] = num;
}

void insertInArray(double data[], int& size, int position, double num)
{
	size++;
	for (int i = size - 1; i >= position; i--)
		data[i] = data[i - 1];
	data[position] = num;
}

void eraseFromArray(int data[], int& size, int position) {


	for (int i = position; i < size - 1; i++) {
		data[i] = data[i + 1];
	}

	size--;
}

void eraseFromArray(double data[], int& size, int position) {


	for (int i = position; i < size - 1; i++) {
		data[i] = data[i + 1];
	}

	size--;
}

void sortArray(int arr[], int n, bool x)
{
	if (x)
	{
		for (int i = n - 1; i >= 1; i--)
			for (int j = 0; j < i; j++)
				if (arr[j] > arr[j + 1])
				{
					int tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
	}
	else
	{
		for (int i = n - 1; i >= 1; i--)
			for (int j = 0; j < i; j++)
				if (arr[j] < arr[j + 1])
				{
					int tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
	}
}

void sortArray(double arr[], int n, bool x)
{
	if (x)
	{
		for (int i = n - 1; i >= 1; i--)
			for (int j = 0; j < i; j++)
				if (arr[j] > arr[j + 1])
				{
					db tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
	}
	else
	{
		for (int i = n - 1; i >= 1; i--)
			for (int j = 0; j < i; j++)
				if (arr[j] < arr[j + 1])
				{
					db tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
	}
}

void matrixMultiplier(int arr1[][100], int n, int m, int arr2[][100], int nn, int mm, int arr3[][100])
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < mm; j++)
			for (int k = 0; k < nn; k++)
				arr3[i][j] += arr1[i][k] * arr2[k][j];
}

int minSumArray(int data[][100], int n, int m, bool row)
{
	if (row)
	{
		int sums[100];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				sums[i] += data[i][j];
		int mn_ind = 0;
		for (int i = 0; i < n; i++)
			if (sums[i] <= sums[mn_ind])
				mn_ind = i;
		return mn_ind;
	}
	else
	{
		int sums[100];
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				sums[i] += data[j][i];
		int mn_ind = 0;
		for (int i = 0; i < n; i++)
			if (sums[i] < sums[mn_ind])
				mn_ind = i;
		return mn_ind;
	}
}

bool isArraySymmetrical(int arr[][100], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (arr[i][j] != arr[n - j - 1][n - i - 1])
				return false;
	return true;
}