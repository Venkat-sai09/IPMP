#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
void io(Node* root, vector<int> & in){
    if(root==NULL) return;
    io(root->left,in);
    in.push_back(root->data);
    io(root->right,in);
}
bool findTarget(Node *root, int target) {
    if(!root) return false;
    vector<int>in;
    io(root,in);
    int l=0,r=in.size()-1;
    while(l<r){
        int sum=in[l]+in[r];
        if(sum==target) return true;
        else if(sum<target) l++;
        else r--;
    }
    return false;
}