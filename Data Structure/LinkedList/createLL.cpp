#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
}*first;
void create(int x[], int item){
    Node *t, *last;
    first = new Node;
    first->data = x[0];
    first->next = NULL;
    last = first;
    for(int i=1;i<item; i++){
        t = new Node;
        t->data = x[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(Node *p){
    while(p != NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}
void rDisplay(Node *p){
    if(p != NULL){
        cout<<p->data<<" ";
        rDisplay(p->next);
    }
}
int main(){
    int size = 6;
    int x[size] = {1, 3, 5, 7, 9, 11};
    create(x, size);
    display(first);
    rDisplay(first);

}