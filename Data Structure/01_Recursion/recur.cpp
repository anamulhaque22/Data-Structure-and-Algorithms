#include<iostream>
using namespace std;
void fun(int a){
    if(a>0){
        cout<<a<<endl;//calling//ascending
        fun(a-1);//returning
    }
}
int main(){
    fun(5);
}