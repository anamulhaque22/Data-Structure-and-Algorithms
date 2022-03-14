#include<iostream>
using namespace std;
struct Stack{
    int top;
    int maxSize;
    char *arr;
};
void createStack(Stack *s){
    s->top = 0;
    s->maxSize = 100;
    s->arr = new char(s->maxSize);
}
bool isFull(Stack s){
    if(s.top==s.maxSize){
        return true;
    }
    return false;
}
bool isEmpty(Stack s){
    if(s.top == 0){
        return true;
    }
    return false;
}
void push(Stack *p, char item){
    if(isFull(*p)){
        cout<<"Stack is full"<<endl;
    }else{
        p->arr[p->top] = item;
        cout<<item<<" is pused."<<endl;
        p->top ++;
    }
}
void pop(Stack *p){
    if(isEmpty(*p)){
        cout<<"Stack is empty."<<endl;
    }else{
        p->top--;
        cout<<p->arr[p->top]<<" is poped."<<endl;
    }
}
char getTopElement(Stack s){
    s.top--;
    return s.arr[s.top];
}
bool validateExpression(){
    Stack ve;
    createStack(&ve);
    char expression[100] = {'\0'};

    //closing part of the breakets-- ),},] -- convert char to int and then substract needed value To equalize with the opening part of breakets
    int cpt = int(')') - 1;
    int cb = int('}') - 2;
    int csb = int(']') - 2;

    cout<<"Enter an Expression: ";
    cin>>expression;
    for(int i=0; expression[i] != '\0'; i++){
        if(expression[i] == '('){
            push(&ve, '(');
        }else if(expression[i] == '{'){
            push(&ve,'{');
        }else if(expression[i] == '['){
            push(&ve, '[');
        }else if(expression[i] == ')'){
            if(isEmpty(ve)){
                cout<<"))"<<endl;
                return 0;
            }else if( (int(getTopElement(ve))) == cpt){
                pop(&ve);
            }
        }else if(expression[i] == '}'){
            if(isEmpty(ve)){
                return 0;
            }else if((int)getTopElement(ve) == cb){
                pop(&ve);
            }
        }else if(expression[i] == ']'){
            if(isEmpty(ve)){
                return 0;
            }else if((int)getTopElement(ve) == csb){
                pop(&ve);
            }
        }
    }
    
    if(isEmpty(ve)){
        return 1;
    }else{
        return 0;
    }
}
void print(Stack s){
    if(isEmpty(s)){
        cout<<"Stack is empty"<<endl;
    }else{
        for(int i = 0; i<s.top; i++){
            cout<<s.arr[i]<<endl;
        }
    }
}
int main(){
    //declare necessary variables and objects
    Stack s;
    createStack(&s);
    bool repeat = true;
    while (repeat == true){
		cout << "What do you want?" << endl << endl;
		cout << "1. Push an Element" << endl;
		cout << "2. Pop an Element" << endl;
		cout << "3. Get the top Element" << endl;
		cout << "4. Print the stack" << endl;
		cout << "5. Validate an expression" << endl;
		cout << "6. Exit" << endl;
		int choice;
		cin >> choice;
		switch (choice){
			case 1:
                cout<<"Enter a value for push: ";
                char item;
                cin>>item;
				push(&s, item);
				break;
			case 2:
				pop(&s);
				break;
			case 3:
				getTopElement(s);
				break;
			case 4:
				print(s);
				break;
			case 5:
				if(validateExpression()){
                    cout<<"Expression is valid"<<endl;
                }else{
                    cout<<"Expression is not valid"<<endl;
                }
				break;
			case 6:
				repeat = false;
				cout << "You have choose to Exit...." << endl;
				break;
			default:
				cout << "Invalid Choice..." << endl;
				break;
		}
	}
}