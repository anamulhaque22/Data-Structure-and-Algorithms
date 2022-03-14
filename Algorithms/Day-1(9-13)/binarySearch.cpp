#include<iostream>
using namespace std;
int main(){
    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int last = 9;
    int first =  0;
    int middle, searchItem, count = 0;
    cout<<"Enter a value: ";
    cin>>searchItem;
    for(int i = 0; i<10; ){
        count++;
        middle = (last+first)/2;
        if(x[middle] == searchItem){
            cout<<"Item is found."<<endl;
            break;
        }else if(searchItem>x[middle]){
            first = middle+1;
            continue;
        }else if(searchItem<x[middle]){
            last = middle-1;
            continue;
        }
    }
    cout<<"The value of count variable: "<<count<<endl;
}