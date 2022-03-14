#include<iostream>
using namespace std;
int main(){
    int sizeOfArray;
    cout<<"Enter the size of array. Array size is gatter then Five: ";
    cin>>sizeOfArray;
    int arr[sizeOfArray];
    bool isNumDublicate[sizeOfArray];//check for whitch elements is counted of an array

    cout<<"Enter the value of array: " ;
    for(int i = 0; i<sizeOfArray; i++){
        cin>>arr[i];
        isNumDublicate[i] = false;
    }

    //to check whether the Array is unique or not.
    bool isAlreadyUnique = true;
    for(int i = 0; i<sizeOfArray; i++){
        for(int j = i+1; j<sizeOfArray; j++){
            if(arr[i] == arr[j]){
                isAlreadyUnique = false;
            }
        }
    }

    if(isAlreadyUnique == true){
        cout<<"Array Already Unique!";
    }else{
            for(int i=0; i<sizeOfArray; i++){
            for(int j=i+1; j<sizeOfArray; j++){
            if( (arr[i]==arr[j]) && (isNumDublicate[j] == false) ){
                isNumDublicate[j] = true;
            }
        }
    }
        int uniqueArraySize=0;
    for(int i = 0; i<sizeOfArray; i++){
        if(isNumDublicate[i] == false){
            uniqueArraySize++;
        }
    }

    int uniqueArray[uniqueArraySize];
    int x = 0;
    for(int i = 0; i<sizeOfArray; i++){
        if(isNumDublicate[i] == false){
            uniqueArray[x] = arr[i];
            x++;
        }
    }
    for(int i = 0; i<uniqueArraySize; i++){
        cout<<uniqueArray[i]<<" ";
    }
    }
}
//1,4,6,3,6,9,1