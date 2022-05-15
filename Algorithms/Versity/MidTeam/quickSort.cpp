#include <iostream>
using namespace std;

// function to swap elements
void swap(int *a, int *b){
int temp = *a;
  *a = *b;
  *b = temp;
}

// function to print the array
void printArray(int A[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << A[i] << " ";
  cout << endl;
}

// find the partition point
int partition(int array[], int low, int high) {

  // select the lefttmost element as pivot
  int pivot = array[low];

  // pointer for greater element
  int i = low, j = high;
  while (i<j){  

    while (pivot>=array[i]){i++;}

    while (pivot<array[j]){j--;}

    if(i<j)
      swap(&array[i], &array[j]);
  }
  swap(&array[low], &array[j]);

  // return the partition point
  return j;
}

void quickSort(int array[], int low, int high) {
if (low < high) {

// find the pivot element such that
// elements smaller than pivot are on left of pivot
// elements greater than pivot are on righ of pivot
int pi = partition(array, low, high);

// recursive call on the left of pivot
quickSort(array, low, pi - 1);

// recursive call on the right of pivot
quickSort(array, pi + 1, high);
}
}

int main() {
  int n = 7;
  int A[n] = {8, 7, 6, 1, 0, 9, 2};

  cout << "Unsorted Array: \n";
  printArray(A, n);

  quickSort(A, 0, n - 1);

  cout << "Sorted array in ascending order: \n";
  printArray(A, n);
}