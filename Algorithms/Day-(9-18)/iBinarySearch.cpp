#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int k){
    int middle;
    int h = n-1;
    int l = 0;
    while (l<=h)
    {
        middle = (l+h)/2;
        if(k == arr[middle]){
            return arr[middle];
        }else if(k<arr[middle]){
            h = middle - 1;
        }else{
            l = middle - 1;
        }
    }
    return -1;
    
}
int main(){
    int x[10] = {1, 2, 3, 4, 9, 14, 19, 27, 30, 100};
    cout<<"Binary Search: "<< binarySearch(x, 10, 19)<<endl;

}