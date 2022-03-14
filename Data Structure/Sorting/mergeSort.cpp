#include<iostream>
using namespace std;
void Marge(int A[], int l, int m, int h){
    int i=l, j=m+1, k=l;
    int B[h];
    while (i<=m && j<=h){
        if (A[i]<A[j])
        {
            B[k++] = A[i++];
        }else{
            B[k++] = A[j++];
        }      
    }
    for (; i <= m; i++)
    {
        B[k++] = A[i];
    }
    for (; j <= h; j++)
    {
        B[k++] = A[j];
    }
    for (i = l; i <= h; i++)
    {
        A[i] = B[i];
    }
    
}

void IMargeSort(int A[], int n){
    int p, l, mid, h;
    for (p = 2; p <= n; p = p*2)
    {
        for (int i = 0; i+p-1 < n; i = i+p)
        {
            l=i;
            h=i+p-1;
            mid = (l+h)/2;
            Marge(A, l, mid, h);
        }
        
    }
    if(p/2<n){
        Marge(A, 0, p/2-1, n-1);
    }
    
}
void printArray(int A[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size = 11;
    int x[size] = {8, 3, 7, 4, 9, 2, 6, 5, 1, 2, 11};
    IMargeSort(x, size);
    printArray(x, size);
    return 0;
}