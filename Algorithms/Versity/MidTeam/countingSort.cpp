#include<iostream>
using namespace std;
int main(){
    int size = 7;
    int IArray[size], OArray[size], k=0;
    for(int i = 1; i<=size; i++){
        cin>>IArray[i];
        if(IArray[i]> k){
            k=IArray[i];
        }
    }
    
    int CArray[k+1];
    for(int i = 0; i<k+1; i++){
        CArray[i] = 0;
    }

    for(int i = 1; i<=size; i++){
        CArray[IArray[i]]+=1;
    }

    //Store cumulative sum of the elements of the count array
    for(int i=1; i<k+1; i++){
        CArray[i]+=CArray[i-1];
    }

    for(int i = 7; i>=1; i--){

        OArray[CArray[IArray[i]]] = IArray[i];
        CArray[IArray[i]] -= 1;
    }

    for(int i=1; i<=size; i++){
        cout<<OArray[i]<<" ";
    }
    return 0;
}