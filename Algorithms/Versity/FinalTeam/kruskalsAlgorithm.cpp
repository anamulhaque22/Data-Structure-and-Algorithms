#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Edge{
    public:
        int source;
        int dest;
        int weight;
};
bool compare(Edge e1, Edge e2){
    // sotr incresing order
    return e1.weight < e2.weight;
}
int findParent(int v, int *parent){
    if(parent[v] == v){
        return v;
    }
    return findParent(parent[v], parent);
}
void kruskalsAlg(Edge *input, int n, int E){
    sort(input, input+E, compare);
    Edge *output = new Edge[n-1];
    int *parent = new int[n];
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
    }
    
    int count = 0; // how many edges add in MST
    int i = 0; // current working edge
    while (count != n-1)
    {
        Edge currentEdge = input[i];
        // check if we can add the currenEdge in MST or not
        int sourceParent = findParent(currentEdge.source, parent);
        int destParent = findParent(currentEdge.dest, parent);
        if(sourceParent != destParent){
            output[count] = currentEdge;
            count++;
            parent[sourceParent] = destParent;
        }
        i++;

    }
    cout<<endl;
    for (int i = 0; i < n-1; i++)
        {
            if(output[i].source< output[i].dest){
                cout<< output[i].source<<" "<<output[i].dest<<" "<<output[i].weight<<endl;
            }else{
                cout<< output[i].dest<<" "<<output[i].source<<" "<<output[i].weight<<endl;
            }
        }
    
}
int main(){
    int n, E;
    cin>> n>> E;
    Edge *input = new Edge[E];
    for (int i = 0; i < E; i++)
    {
        int s, d, w;
        cin>> s>> d>> w;
        input[i].source = s;
        input[i].dest = d;
        input[i].weight = w;
    }
    /*
    6 11
    1 3 1
    0 1 2
    0 3 3
    0 2 4
    4 5 5
    2 3 6
    3 5 7
    2 1 8
    2 4 9
    2 5 10
    3 4 11
    */
    kruskalsAlg(input, n, E);
    return 0;
}