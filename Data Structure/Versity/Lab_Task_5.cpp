#include<iostream>
using namespace std;
int main(){
    int sizeOfArray;
    cout<<"Enter the size of array: ";
    cin>>sizeOfArray;
    int arr[sizeOfArray];

    cout<<"Enter the value of array: " ;
    for(int i = 0; i<sizeOfArray; i++){
        cin>>arr[i];
    }

    bool isNumCounted[sizeOfArray];//check for whitch elements is counted of an array
    for(int i=0; i<sizeOfArray; i++){
        isNumCounted[i] = false;
    }


    for(int i = 0; i<sizeOfArray; i++){
        int counter = 0;
        if(isNumCounted[i] == false){
            for(int j = 0; j<sizeOfArray; j++){
            if(arr[i] == arr[j]){
                counter++;
                isNumCounted[j] = true;
            }
        }
        cout<<arr[i]<<" occurs = "<<counter<<" times"<<"\n";
        }
    }
}
//8,4,6,1,6,9,6,1,9,8