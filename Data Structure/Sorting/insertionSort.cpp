#include<iostream>
using namespace std;
void insertionSort(int n, int A[]){\
    int i, j, x;
    for(i = 1; i<n; i++){
        j = i-1;
        x = A[i];
        while (j>=0 && A[j]>x){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;        
    }
}
void display(int size, int x[]){
    for(int i = 0; i<size; i++){
        cout<<x[i]<<" ";
    }
}
int main(){
    int size = 6;
    int x[size] = {90, 2, 90, 5, 70, 1};
    cout<<"Before INSETTION SORT: "<<endl;
    display(size, x);
    cout<<endl;
    insertionSort(size, x);
    cout<<"After INSETTION SORT: "<<endl;
    display(size, x);
}