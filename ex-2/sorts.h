#ifndef sorts_h
#define sorts_h
#include <stdio.h>

void bubbleSort(int arr[], int arrSize);
void outArr(char *name, char *time, int arr[], int arrSize);
void insertSort(int arr[], int arrSize);
void binaryInsertSort(int arr[], int arrSize);
void selectSort(int arr[], int arrSize);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int left, int right);

#endif
