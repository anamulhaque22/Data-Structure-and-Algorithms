#include<iostream>
using namespace std;

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int A[], int n){
    int flag;
    for(int i = 1; i<n; i++){
        flag = 0;
        for(int j = 0; j<n-i; j++){
            if(A[j]>A[j+1]){
                swap(&A[j], &A[j+1]);
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }
}
int main(){
    int A[] = {2, 5, 1, 6, 3, 4, 9, 10, 7, 8}, n=10;
    BubbleSort(A, n);

    for(int i=0; i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}