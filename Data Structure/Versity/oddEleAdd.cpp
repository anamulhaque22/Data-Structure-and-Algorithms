#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int row, col;
    cout<<"Enter 2D arrays row size: ";
    cin>>row;
    cout<<"Enter 2D arrays column size: ";
    cin>>col;
    int arr[row][col];
    cout<<"Enter the value of 2D array: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int x = ceil((float)col/2);
    int y = 0;
    int oddColSum[x];
    for(int i=0; i<col; i+=2){
        int sum=0;
        for(int j=0; j<row; j++){
            sum+=arr[j][i];
        }
        oddColSum[y] = sum;
        y++;
    }
    for(int i = 0; i<x;i++){
        cout<<oddColSum[i]<<" ";
    }



}