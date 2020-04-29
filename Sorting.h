#include<iostream>
using namespace std;



void swapnum(int&, int&);
void print();
void reset();

void selectionSort(int *array, int);

void insertionSort(int *array, int);

void merge (int a[], int lf, int ll, int rf, int rl);
void mergeSort (int a[], int first, int last);

void quickSort ( int a[], int first, int last);
void partition ( int a[], int first, int last, int &p);

void heapSort ( int a[], int length );
void heapDown ( int list[], int root, int last);