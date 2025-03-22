#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
void getsum(Node* root,int& s){
    if(root==NULL) return ;
    else{
        s+=root->data;
        getsum(root->left,s);
        getsum(root->right,s);
    }
}
void updat(Node* root,int& s){
    if(root==NULL) return ;
    else{
        updat(root->left,s);
        int t=root->data;
        root->data=s;
        s-=t;
        updat(root->right,s);
        
    }
}
Node* modify(Node *root)
{
    // Your code here
    int s=0;
    getsum(root,s);
    updat(root,s);
    return root;
}