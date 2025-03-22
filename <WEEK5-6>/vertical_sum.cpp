#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
void updat(map<int,int>&mp,Node* root,int l){
    if(root==NULL){
        return ; 
    }else{
        mp[l]+=root->data;
        updat(mp,root->left,l-1);
        updat(mp,root->right,l+1);
    }
}
vector <int> verticalSum(Node *root) {
    // add code here.
    map<int,int> mp;
    updat(mp,root,0);
    vector<int> a;
    for(auto x:mp){
        a.push_back(x.second);
    }
    return a;
}