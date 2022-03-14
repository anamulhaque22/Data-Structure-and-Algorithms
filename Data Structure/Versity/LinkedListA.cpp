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
void insertNodeInMiddle()
{
	Node *posNode;
	int val, newNodeVal;
	cout<<"Enter a NODE value where you want to insert a new NODE after this node: ";
	cin>>val;
	cout<<"\nEnter a value for new Node: ";
	cin>>newNodeVal;
	newNode = new Node;
	newNode->data = newNodeVal;
	newNode->nextNode = NULL;
	currentNode = firstNode;
	while(currentNode != NULL){
		if(currentNode->data == val){
			posNode = currentNode;
			break;
		}
		currentNode = currentNode->nextNode;
	}
	newNode->nextNode = posNode->nextNode;
	posNode->nextNode = newNode;
}

int main(){

    int linkedListValue[5] = {10, 20, 30, 40, 50}; 
	for(int i = 0; i<5; i++)
	{
		newNode = new (Node);
		newNode->data = linkedListValue[i];
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
	insertNodeInMiddle();
	cout<<"After insert a new Node at somewhere in  middle: ";
	printElements();

}