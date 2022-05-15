#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
}*first;

void createLinkedList(int a[], int item){
    Node *t, *last;
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < item; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
    
}

void display(Node *f){
    while (f!=NULL)
    {
        cout<<f->data<<endl;
        f= f->next;
    }
    
}
int main(){
    int x[5] = {1, 2, 3, 4, 5};
    createLinkedList(x, 5);
    display(first);
}