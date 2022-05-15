#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int A[], int n){
    int i, j, minIndex;
    for (i = 0; i < n-1; i++)
    {
        minIndex = i;
        for ( j = i+1; j < n; j++)
        {
            if (A[j]<A[minIndex])
            {
                minIndex = j;
            }
            
        }
        if(minIndex != i)
            swap(A[i], A[minIndex]);
        
    }
    
}
void display(int x[], int size){
    for(int i = 0; i<size; i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size = 6;
    int x[size] = {30, 2, 20, 40, 70, 100};
    cout<<"Before SELECTION SORT: "<<endl;
    display(x, size);
    cout<<endl;
    selectionSort(x, size);
    cout<<"After SELECTION SORT: "<<endl;
    display(x, size);
}