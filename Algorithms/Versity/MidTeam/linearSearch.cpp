#include <iostream>
using namespace std;
int main() {
   int k, i, n=6;
   int arr[n] = { 12, 35, 69, 74, 165, 54};
   k=35;
   for (i = 0; i < n; i++) {
      if (arr[i] == k) {
         cout<<k<<" is present in the array."<<endl;
         break;
      }
   }
   if (i == n)
      cout<<k<<" isn't present in the array."<<endl;
   return 0;
}