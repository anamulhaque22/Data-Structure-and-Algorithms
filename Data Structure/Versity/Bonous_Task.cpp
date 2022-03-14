#include<iostream>
using namespace std;
class StackImple{
    public:
    int Stack[50]
    int top, 
    int maxSize;
    public:
    StackImple(int size = 100){
        maxSize = size;
        top = 0;
    }
    bool isImpty(){
        return (top==0)
    }
    bool isFull(){
	    return (top == maxSize);
    }
    bool pop(){
        if( isEmpty() ){ 
            cout << "Stack empty\n";
            return false;
        }
        top--;
        return true;
    }
    int topElement(){
        return Stack[ top - 1 ];
    }
    void show(){
        if(isEmpty()){
            cout << "Stack empty\n"; return;
        }
        for( int i=Top-1; i>=0; i-- ){
            cout << Stack[i] << endl; 
        }
         
    }



}
int main(){

}