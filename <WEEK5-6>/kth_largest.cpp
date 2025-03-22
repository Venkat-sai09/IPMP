#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
int kthsmall(Node* root,int k,int& cnt){
    if(!root) return -1;
    int l=kthsmall(root->left,k,cnt);
    if(l!=-1) return l;
    cnt++;
    if(cnt==k) return root->data;
    int r=kthsmall(root->right,k,cnt);
    return r;
}
int kthSmallest(Node *root, int k) {
    // add code here.
    int cnt=0;
    return kthsmall(root,k,cnt);
}