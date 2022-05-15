#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int sum = 0;
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
        for(int j=1; j<col; j+=2){
            sum+=arr[i][j];
        }
    }
    cout<<"Sum of odd columns value: "<<sum<<endl;



}