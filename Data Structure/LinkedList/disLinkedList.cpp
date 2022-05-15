#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
}*first = NULL;

void createLL(int x[], int n){
    Node *t, *last;
    first = new Node;
    first->data = x[0];
    last->next = NULL;
    last = first;
    for(int i =1; i<n; i++){
        t = new Node;
        t->data = x[i];
        t->next = NULL;
        last->next = t;
        last =t;
    }

}
void display(Node *p){
    //cout<<"Display"<<endl;
    while(p != NULL){
        cout<<p->data<<endl;
        p=p->next;
    }
}
int main(){
    //cout<<"main"<<endl;
    int x[] = {3, 5, 7, 9, 1, 13};
    createLL(x, 6);
    display(first);

}