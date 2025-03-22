#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
int check(Node* root){
    if(root==nullptr) return 0;
    int l=check(root->left);
    int r=check(root->right);
    if(l==-1||r==-1||abs(l-r)>1) return -1;
    return max(l,r)+1;
}
bool isBalanced(Node* root) {
    // Code here
    return((check(root)>0));
}