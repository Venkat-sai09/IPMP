#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
Node* delete_Node(Node* root){
    if(root==NULL) return NULL;
    if(root->left==NULL&&root->right==NULL){
        delete root;
        return NULL;
    }
    root->left=delete_Node(root->left);
    root->right=delete_Node(root->right);
    return root;
}