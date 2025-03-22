#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
bool check(Node* l ,Node* r){
    if((!l&&!r)) return true;
    if((!l||!r)) return false;
    return check(l->left,r->right)&&check(l->right,r->left);
    
}
bool IsFoldable(Node* root)
{
    // Your code goes here
    if(!root) return true;
    return check(root->left,root->right);
}