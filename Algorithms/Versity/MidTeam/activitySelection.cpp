#include <bits/stdc++.h> 
using namespace std; 
struct Activity 
{   
    char id[5];
    int start, finish; 
}; 
  
 

void activitySelection(Activity vec[], int n) 
{
    cout << "Following activities are selected - "; 
  
    
    int i = 0; 
    cout <<vec[i].id<<"(" << vec[i].start << ", " << vec[i].finish << "), "; 
  
   
    for (int j = 1; j < n; j++) 
    { 
      
      if (vec[j].start >=vec[i].finish) 
      { 
          cout <<vec[j].id<< "(" << vec[j].start << ", "
              << vec[j].finish << "), "; 
          i = j; 
      } 
    } 
}
  
 
int main() 
{ 
    Activity a[] = {
        {"a1", 4, 8},
        {"a2", 2, 5},
        {"a3", 4, 6},
        {"a4", 1, 4}, 
        {"a5", 3, 7},
        {"a6", 8, 9}
    };
    Activity temp;
    int n = sizeof(a)/sizeof(a[0]); 
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
           if(a[j+1].finish < a[j].finish){
               temp = a[j];
               a[j] = a[j+1];
               a[j+1] = temp;
           } 
        }
        
    }
    
    activitySelection(a, n); 
    return 0; 
}