#include<iostream>
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
int add(Node *p){
    int sum = 0;
    while(p!=NULL){
        sum+=p->data;
        p=p->next;
    }
    return sum;
}

int main(){
    int size = 6;
    int x[size] = {2, 4, 6, 8, 10, 12};
    create(x, size);
    cout<<"Sum of Nodes Data: "<<add(head);
}