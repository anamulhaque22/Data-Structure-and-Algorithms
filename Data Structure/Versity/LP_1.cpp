#include<iostream>
using namespace std;
int main(){
    int sizeOfArray;
    cout<<"Enter the 2D array size. Where row and column size equal."<<endl;
    cin>>sizeOfArray;
    int arr[sizeOfArray][sizeOfArray];
    double digSum1=0,digSum2=0;
    cout<<"Enter the 2D array:"<<endl;
    for(int i = 0; i<sizeOfArray; i++){
        for(int j=0; j<sizeOfArray; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<sizeOfArray; i++){
        digSum1+=arr[i][i];
    }
    int x = sizeOfArray-1;
    for(int i = 0; i<sizeOfArray; i++){
        digSum2+=arr[i][x--];
    }
    double avg = (digSum1+digSum2)/(2*sizeOfArray);

    cout<<"The average of diagonal elements: "<< avg;
}