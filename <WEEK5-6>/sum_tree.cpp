#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
bool isLeaf(Node* root){
    if(!root) return false;
    else if(!root->left&&!root->right) return true;
    return false;
}
bool isSumTree(Node* root) {
    // Your code here
    int ls,rs;
    if(!root||isLeaf(root)) return true;
    if(isSumTree(root->left)&&isSumTree(root->right)){
        if(!root->left) ls=0;
        else if(isLeaf(root->left)) ls=root->left->data;
        else ls=2*(root->left->data);
        if(!root->right) rs=0;
        else if(isLeaf(root->right)) rs=root->right->data;
        else rs=2*(root->right->data);
        return (root->data==ls+rs);
    }
    return false;
}