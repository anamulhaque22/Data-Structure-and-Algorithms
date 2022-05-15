#include <iostream>
using namespace std;
int main(){
    int x[5] = {5, 7, 9, 11, 13};
    cout<<"Arrays Value: ";
    for(int i = 0; i<5; i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
    cout<<"Input a value to perform liner search: ";
    int y;
    cin>>y;
    int temp;
    bool flag= false;
    for(int i = 0; i<5; i++){
        if(x[i]==y){
            temp = x[i];
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"The value is found.";
    }else{
        cout<<"The value is not found.";
    }
}