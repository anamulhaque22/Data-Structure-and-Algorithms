#include<iostream>
using namespace std;
struct  Item
{
    char id[5];
    int weight;
    int value;
    float density;
};
void fractionalKnapsack(Item items[], int n, int w){
    int i, wt;
    float totalWeight =0, totalValue =0;
    float fvalue;
    for (i = 0; i < n; i++)
    {
        if (items[i].weight+totalWeight<=w)
        {
            totalValue+=items[i].value;
            totalWeight+=items[i].weight;
        }else{
            wt = w-totalWeight;
            fvalue = wt*(float(items[i].value)/items[i].weight);
            totalValue+=fvalue;
            totalWeight+=wt;
            break;
        }
        
    }
    cout<<"Total weight: "<<totalWeight<<endl;
    cout<<"Total value: "<<totalValue<<endl;
    
}

int main(){
    int i, j;
    Item items[6] = {
        {"i1", 6, 6, 0},
        {"i2", 10, 2, 0},
        {"i3", 3, 1, 0},
        {"i4", 5, 8, 0},
        {"i5", 1, 3, 0},
        {"i6", 3, 5, 0}
    };
    //temp item
    Item temp;
    //number of items
    int n = 6;
    //max weight limit of knapsack
    int W = 16;
    for (i = 0; i < n; i++)
    {
        items[i].density = float(items[i].value)/items[i].weight;
    }
    

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n-i; j++)
        {
            if (items[j+1].density> items[j].density)
            {
                temp = items[j+1];
                items[j+1] = items[j];
                items[j] = temp;
            }
            
        }
        
    }
    fractionalKnapsack(items, n, W);
    return 0;
}