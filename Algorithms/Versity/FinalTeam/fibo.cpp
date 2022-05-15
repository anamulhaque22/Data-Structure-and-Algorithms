#include <iostream>  
using namespace std;  
int main(){  
    int a1=0,a2=1,a3,num;    
    cout<<"Enter the number of elements: ";    
    cin>>num;    
    cout<<a1<<" "<<a2<<" ";  
    for(int i=2;i<num;++i) {
        a3=a1+a2;    
        cout<<a3<<" ";    
        a1=a2;    
        a2=a3;    
    }
}  