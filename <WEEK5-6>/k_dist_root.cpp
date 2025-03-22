#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
void updat(Node* root,int l,int k,vector<int>&a){
    if(root==NULL) return;
    if(l==k){
        a.push_back(root->data);
    }
    updat(root->left,l+1,k,a);
    updat(root->right,l+1,k,a);
}
vector<int> Kdistance(Node *root, int k) {
    // Your code here
    vector<int> a;
    if(k==0) return {root->data};
    int l=0;
    updat(root,l,k,a);
    return a;
}