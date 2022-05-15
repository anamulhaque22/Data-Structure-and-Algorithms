#include<iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
}*head;
void create(int x[], int size){
    Node *t, *last;
    head = new Node;
    head->data = x[0];
    head->next = NULL;
    last = head;
    for(int i=1; i<size; i++){
        t = new Node;//t1,
        t->data = x[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
int max(Node *p){
    int maxVal = 0;
    if(p == NULL){
        return INT_MIN;
    }else{
        maxVal = max(p->next);
    }
    if(maxVal > p->data){
        return maxVal;
    }else{
        return p->data;
    }

}

int main(){
    int size = 6;
    int x[size] = {2, 4, 6, 100, 10, 12};
    create(x, size);
    cout<<"Maximus Value of Nodes: "<<max(head)<<endl;
    //cout<<"Sum of Nodes Data: "<<add(head);
}