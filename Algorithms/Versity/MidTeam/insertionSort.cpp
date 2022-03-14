#include<iostream>
using namespace std;
void insertionSort(int size,int a[]){
    for(int i=1; i<size; i++){
        int item = a[i];
        int j = i-1;
        while(j>=0 && a[j]> item){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = item;
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