#include<iostream>
using namespace std;
int main(){
    int sizeOfArray;
    cout<<"Enter the array size: ";
    cin>>sizeOfArray;
    double arr[sizeOfArray];
    cout<<"Enter the array:"<<endl;
    for(int i = 0; i<sizeOfArray; i++){
        cin>>arr[i];
    }
    int positiveCounter = 0, negCounter = 0;
    for(int i = 0; i<sizeOfArray; i++){
        if(arr[i]>0){
            positiveCounter++;
        }else if(arr[i]<0){
            negCounter++;
        }
    }
    double posArray[positiveCounter];
    double negArray[negCounter];
    int x = 0;
    int y = 0;
    for(int i = 0; i<sizeOfArray; i++){
        if(arr[i]>0){
            
            if(positiveCounter>y){
            posArray[y]=arr[i];
            y++;
            }
        }
        else if(arr[i]<0){
            
            if(negCounter>x){
                negArray[x]=arr[i];
                x++;
            }
            }
        }

    cout<<"Positive: ";
    for(int i = 0; i<positiveCounter; i++){
        cout<<posArray[i]<<" ";
    }
    cout<<"Negative: ";
    for(int i = 0; i<negCounter; i++){
        cout<<negArray[i]<<" ";
    }

}