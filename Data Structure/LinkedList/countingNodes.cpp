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
int countNode(Node *p){
    int count = 0;
    while(p != NULL){
        count++;
        p = p->next;
    }
    return count;
}
int rCountNodes(Node *p){//rCountNodes RECURSIVE FUNCTION for counting nodes number
    if(p != NULL){
        return rCountNodes(p->next)+1;
    }else{
        return 0;
    }
}

int main(){
    int size = 6;
    int x[size] = {2, 4, 6, 8, 10, 12};
    create(x, size);
    cout<<"Number of Nodes : "<<countNode(head)<<endl;
    cout<<"Number of Nodes : "<<rCountNodes(head);
}