#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node* next;
};
void populateNext(Node *root, Node* &nd) { // Use reference to avoid static variable issues
    if (root) {
        populateNext(root->right, nd);  
        root->next = nd;                
        nd = root;                      
        populateNext(root->left, nd);  
    }
}

void populateNext(Node *root) {
    Node* nd = NULL;  
    populateNext(root, nd);
}