#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int x[], int l){
    for(int i = 0; i<l-1; i++){
        int minIndex = i;
        for(int j = i+1; j<l; j++){
            if(x[minIndex]>x[j]){
                minIndex = j;
            }
        }
        if(x[i] != x[minIndex]){
            swap(&x[i], &x[minIndex]);
        }
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