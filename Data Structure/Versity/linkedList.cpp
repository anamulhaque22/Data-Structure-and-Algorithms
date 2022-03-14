#include<iostream>
using namespace std;

class Account
{
	int accountNumber;
	float balance;

	public:
	
	void setAccountNumber(int accountNumber){
		this->accountNumber = accountNumber;
	}
	void setBalance(float balance){
		this->balance = balance;
	}
	int getAccountNumber(){return accountNumber;}
	float getBalance(){return balance;}
};

struct Node
{
	Account account;
	Node *nextNode;
};
Node *newNode, *firstNode, *currentNode;


void printLinkedList()
{
	currentNode = firstNode;
	while (currentNode != NULL)
	{
		cout<<"Account Number: "<<currentNode->account.getAccountNumber()<<endl;
        cout<<"Account Balance: "<<currentNode->account.getBalance()<<endl;
        cout<<endl;
		currentNode = currentNode->nextNode;
	}
	cout<<endl;
}


void searchAccountNumber()
{
	cout<<"Enter an Account number for search: ";
    int a;
	bool flag = false;
    cin>>a;

	currentNode = firstNode;
	while(currentNode != NULL)
	{
		if(currentNode->account.getAccountNumber() == a)
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

int main()
{
	int n;

	cout<<"Enter the number of nodes: ";
	cin>>n;

	for(int i = 1; i<=n; i++)
	{
		newNode = new (Node);

		int accountNumber;
		float balance;
		cout<<"Enter the Account Number of node no {"<<i<<"} : ";
		cin>>accountNumber;
		cout<<"Enter the Account Balance of node no {"<<i<<"} : ";
		cin>>balance;
        
		newNode->account.setAccountNumber(accountNumber);
        newNode->account.setBalance(balance);
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

	
	printLinkedList();
	searchAccountNumber();
}