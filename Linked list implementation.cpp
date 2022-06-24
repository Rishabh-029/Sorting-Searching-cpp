#include<bits/stdc++.h>

using namespace std;

const int N=1e5+10;

class Node{
	public:
		int value;
		Node *link;
};


printll(Node* n)
{

	while(n!=NULL)
	{
		cout<<n->value;
		n=n->link;

	}
}

int main()
{
	
	Node* head=new Node();
	Node* second=new Node();
	Node* third=new Node();


	head->value=1;
	head->link=second;
	second->value=2;
	second->link=third;
	third->value=3;
	third->link=NULL;

	printll(head);

}
