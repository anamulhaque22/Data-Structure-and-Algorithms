#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *nextNode;
};

Node *firstNode, *newNode, *currentNode;
int n;

void printElements()
{
	currentNode = firstNode;

	while (currentNode != NULL)
	{
		cout<<currentNode->data<<"--->";
		currentNode = currentNode->nextNode;
	}
	cout<<endl;
}

void searchElement()
{
	int element;
	bool flag = false;

	cout<<"Enter the value of the element to search: ";
	cin>>element;

	currentNode = firstNode;

	while(currentNode != NULL)
	{
		if(currentNode->data == element)
		{
			flag = true;
			break;
		}
		else
		{
			currentNode = currentNode->nextNode;
		}
	}
	if(flag == true)
	{
		cout<<"Found"<<endl;
	}
	else
	{
		cout<<"Not Found"<<endl;
	}
}

void insertNodeAtFirstPosition()
{
	cout<<"Enter a value to insert node at first positon: ";
	int a;
	cin>>a;
	newNode = new Node;
	newNode->data = a;
	if(firstNode == NULL){// if in Llinked list there is no element
		firstNode = newNode;
		firstNode->nextNode = NULL;
	}else{
		newNode->nextNode = firstNode;
		firstNode = newNode;
	}
}

void insertNodeAtLastPosition()
{	
	Node *lastNode;
	cout<<"Enter a value to insert last positon: ";
	int a;
	cin>>a;
	newNode = new Node;
	newNode->data = a;
	newNode->nextNode = NULL;
	currentNode = firstNode;
	while(currentNode != NULL){
		if(currentNode->nextNode == NULL){
			lastNode = currentNode;
		}
		currentNode = currentNode->nextNode;
	}
	lastNode->nextNode = newNode;
}

void insertNodeSomewhereInTheMiddle()
{
	Node *posNode;
	int pos, a, countPos =0;
	cout<<"Enter a NODE position where you want to insert a new NODE: ";
	cin>>pos;
	cout<<"\nEnter a value: ";
	cin>>a;
	newNode = new Node;
	newNode->data = a;
	newNode->nextNode = NULL;
	currentNode = firstNode;
	while(currentNode != NULL){
		countPos++;
		if(countPos == pos){
			posNode = currentNode;
			break;
		}
		currentNode = currentNode->nextNode;
	}
	newNode->nextNode = posNode->nextNode;
	posNode->nextNode = newNode;
}

void deleteNodeFromFirstPosition()
{
	Node *t;
	if(firstNode == NULL){// if in Llinked list there is no element
		cout<<"There is no Linked List";
	}else{
		t = firstNode;
		firstNode = firstNode->nextNode;
		delete t;

	}

}

void deleteNodeFromLastPosition()
{
	Node *toDelete, *secondLastNode;
	toDelete = firstNode;

	while(toDelete-> nextNode != NULL){
		secondLastNode = toDelete;
		toDelete = toDelete->nextNode;
	}
	secondLastNode->nextNode = NULL;
	delete toDelete;
}
void deleteNodeSomewhereInTheMiddle()
{

}

int main()
{
	cout<<"Enter the number of nodes for a linked list: ";
	cin>>n;

	for(int i = 1; i<=n; i++)
	{
		newNode = new (Node);

		int element;
		cout<<"Enter the element for node no. {"<<i<<"}: ";
		cin>>element;

		newNode->data = element;
		newNode->nextNode = NULL;

		if(firstNode == NULL)
		{
			firstNode = newNode;
			currentNode = newNode;
		}
		else
		{
			currentNode->nextNode = newNode;
			currentNode = newNode;
		}
	}

	printElements();
	//searchElement();
	insertNodeAtFirstPosition();
	cout<<"After insert a new Node at first position: ";
	printElements();
	cout<<endl;

	insertNodeAtLastPosition();
	cout<<"After insert a new Node at last position: ";
	printElements();

	insertNodeSomewhereInTheMiddle();
	cout<<"After insert a new Node at some where in the middle: ";
	printElements();

	deleteNodeFromFirstPosition();
	cout<<"After delete the first node: ";
	printElements();

	deleteNodeFromLastPosition();
	cout<<"After delete the last node: ";
	printElements();

}