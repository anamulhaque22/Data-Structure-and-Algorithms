#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp = *a;
    *a=*b;
    *b = temp;
}
void selectionSort(int A[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for (int j = 1+i; j < n; j++)
        {
            if(A[minIndex]>A[j]){
                minIndex = j;
            }
        }
        if(minIndex != i){
            swap(&A[i], &A[minIndex]);
        }
        
    }
    
}
int IBinarySearch(int A[], int h, int key){
    int low = 0, heigh = h, middle;
    while (low<=heigh)
    {
       middle = (low+heigh)/2;
       if(A[middle] == key) {
           return key;
       }else if (A[middle]> key)
       {
           heigh = middle-1;
       }else{
           low = middle+1;
       }
       
    }
    return 0;
    
}
int RBinarySearch(int A[], int low, int heigh, int key){
    int middle;
    if(low<=heigh){
        middle = (low+heigh)/2;
        if (A[middle] == key){
            return key;
        }else if (A[middle]>key)
        {
            return RBinarySearch(A, low, middle-1, key);
        }else{
            return RBinarySearch(A, middle+1, heigh, key);
        }
        
    }
    return 0;
}
void printArray(int A[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size = 10;
    int array[size] = {2, 20, 1, 9, 11, 16, 12, 2, 18, 13};
    selectionSort(array, size);
    printArray(array, size);
    int foundValue = IBinarySearch(array, size-1, 222);
    if (foundValue)
    {
        cout<<"value is fount and the value is : "<<foundValue<<endl;
    }else{
        cout<<"The value is not fount."<<endl;
    }
    cout<<RBinarySearch(array, 0, size-1, 12);
    return 0;
}