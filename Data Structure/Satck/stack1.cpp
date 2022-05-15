#include<iostream>
using namespace std;
struct Stack{
    int top;
    int maxSize;
    int* stackArray;
};
void create(Stack *a){
    cout<<"Enter the Stack Size: ";
    cin>>a->maxSize;
    a->top = 0;
    a->stackArray = new int (a->maxSize);
}

void displayStack(Stack d){
    for(int i = d.top-1; i>=0; i--){
        cout<<d.stackArray[i]<<" ";
    }
}

void push(Stack *p, int item){
    if(p->top<p->maxSize){
        p->stackArray[p->top] = item;
        p->top += 1;
    }else{
        cout<<"Stack is full"<<endl;
    }
}
bool isEmpty(Stack em){
    if(em.top == em.maxSize){
        return false;
    }else{
        return true;
    }
}


int pop(Stack *c){
    int item;
    if(c->top == 0){
        cout<<"Stack is Empty"<<endl;
        return -1;
    }else{
        c->top -=1;
        item = c->stackArray[c->top];
    }
    return item;
}

int peek(Stack r, int index){
    int item;
    if(r.maxSize < index){
        cout<<"Invelid number"<<endl;
        return -1;
    }else if(r.top < index && index<=r.maxSize){
        cout<<index<<" index is empty"<<endl;
        return -1;
    }else if(r.top>=index){
        item = r.stackArray[r.top-index];
    }
    return item;
}


int main(){
    Stack s1;
    create(&s1);
    push(&s1, 1);//
    push(&s1, 2);
    push(&s1, 3);
    push(&s1, 4);

    displayStack(s1);
    cout<<endl;
    displayStack(s1);
    cout<<endl;
    cout<<"Peek: "<<peek(s1, 4);

}