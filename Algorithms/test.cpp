#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    int x [5] = {200, 2, 4, 20, 100};
    for(int i =1; i<5; i++){
        x[i]+=x[i-1];
    }
    for(int i = 0; i<5; i++){
        cout<<x[i]<<" ";
    }
}