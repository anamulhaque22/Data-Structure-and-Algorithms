#include<iostream>
using namespace std;
void bubbleSort(int x[], int size){
    int temp;
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size-i-1; j++){
            if(x[j]>x[j+1]){
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
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
    int x[size] = {30, 2, 20, 400, 70, 100};
    cout<<"Before BUBBLE SORT: "<<endl;
    display(x, size);
    bubbleSort(x, size);
    cout<<"After BUBBLE SORT: "<<endl;
    display(x, size);
}