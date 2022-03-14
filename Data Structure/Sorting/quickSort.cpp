 #include<iostream>
 using namespace std;
 void swap(int* a, int* b){
     int temp = *a;
     *a = *b;
     *b = temp;
 }
 int partiton(int A[], int l, int h){
     int pivot = A[l];
     int i =l;
     int j = h;
    while (i<j){
        while (A[i]<=pivot){
            i++;
        }
        while (A[j]>pivot){
            j--;
        }
        if (i<j){
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[l], &A[j]);
    return j;
 }
void quickSort(int A[], int l, int h){
    if(l<h){
        int p = partiton(A, l, h);
        quickSort(A, l, p-1);
        quickSort(A, p+1, h);
    }
}
void display(int A[], int n){
    for(int i = 0; i<n; i++){
        cout<<A[i]<<" ";
    }
}
 int main(){
     int size = 8;
     int X[size] = {99, 5, 2, 10, 9, 20, 3, 6};
     display(X, size);
     cout<<endl;
     quickSort(X, 0, size-1);
     display(X, size);

 }