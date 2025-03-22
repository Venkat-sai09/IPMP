#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* LCA(Node* root, Node* n1, Node* n2) {
    // code here
    if(root==NULL) return root;
    if(root==n1||root==n2) return root;
    Node* l=LCA(root->left,n1,n2);
    Node* r=LCA(root->right,n1,n2);
    if(l&&r) return root;
    return l?l:r;
}