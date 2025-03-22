#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
bool updat(Node* root,int lvl,int& lef_lvl){
    if(!root) return true;
    else if(!root->left&&!root->right){
        if(lef_lvl==-1){
            lef_lvl=lvl;
            return true;
        }else {
            if(lef_lvl==lvl) return true;
            else return false;
        }
    }else return updat(root->left,lvl+1,lef_lvl) && updat(root->right,lvl+1,lef_lvl) ;
}
bool check(Node *root) {
    // Your code here
    int leaf_lvl=-1;
    if(updat(root,1,leaf_lvl)) return true;
    else return false;
}