#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
bool isLeaf(Node* root){
    return ((!root->left)&&(!root->right));
}
bool check(Node* root){
    if(root==nullptr) return true;
    if(isLeaf(root)) return true;
    int l,r;
    if(root->left)  l=root->left->data;
    else l=0;
    if(root->right) r=root->right->data;
    else r=0;
    if(root->data==(l+r)) return check(root->left)&&check(root->right);
    else return false;
    
}
int isSumProperty(Node *root)
{
 // Add your code here
    bool t=check(root);
    if(t) return 1;
    else return 0;
}