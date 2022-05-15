#include<iostream>
#include <string.h>
using namespace std;
struct Stack{
    int top;
    int maxSize;
    char *ar;
};
void create(Stack *s, int size){
    s->top = 0;
    s->maxSize = size;
    s->ar = new char[s->maxSize];
}
bool isEmpty(Stack s){
    return (s.top == 0);
}
bool isFull(Stack s){
    return (s.top = s.maxSize);
}
void push(Stack* s, char item){
    s->ar[s->top] = item;
    s->top++;
}
void pop (Stack *s){
    if(s->top !=0){
        s->top --;
    }
}

bool isBalanced(char exp[]){
    Stack s;
    int lenght = strlen(exp);
    cout<<"Len"<<lenght<<endl;
    create(&s, lenght);

    for(int i = 0; i<lenght; i++){
        if(exp[i] == '('){
            push(&s, '(');
        }else if(exp[i] == ')'){
            if(isEmpty(s)){
                cout<<"em"<<i<<endl;
                return false;
            }else{
                cout<<"pop"<<i<<endl;
                pop(&s);
            }
        }
    }
    if(s.top==0){
        cout<<"True"<<endl;
        return true;
    }else{
        cout<<"False out"<<endl;
        return false;
    }
}

int main(){

    char exp[] = ")))()()";
    cout<<isBalanced(exp);

}