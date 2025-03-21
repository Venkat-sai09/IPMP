#include <bits/stdc++.h>
using namespace std;

class node 
{ 
	public:
	int data; 
	node* left; 
	node* right; 
}; 

node* newNode(int data); 

void doubleTree(node* Node) 
{ 
    if(Node==nullptr) return;
	node* temp= newNode(Node->data);
    node* l= Node->left;
    Node->left=temp;
    temp->left=l;
    doubleTree(l);
    doubleTree(Node->right);

} 

node* newNode(int data) 
{ 
	node* Node = new node();
	Node->data = data; 
	Node->left = NULL; 
	Node->right = NULL; 
	
	return(Node); 
} 

void printInorder(node* node) 
{ 
	if (node == NULL) 
		return; 
	printInorder(node->left); 
	cout << node->data << " "; 
	printInorder(node->right); 
} 

int main() 
{ 
	node *root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->left = newNode(4); 
	root->left->right = newNode(5); 
	
	cout << "Inorder traversal of the original tree is \n"; 
	printInorder(root); 
	
	doubleTree(root); 
		
	cout << "\nInorder traversal of the double tree is \n"; 
	printInorder(root); 
	
	return 0; 
} 

