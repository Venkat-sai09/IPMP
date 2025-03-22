#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
void cnt(Node* root,int &count){
    if(!root) return ;
    else{
        if(!root->left&&!root->right) count++;
        else{
            cnt(root->left,count);
            cnt(root->right,count);
        }
    }
}
int countLeaves(Node* root) {
    // write code here
    int count=0;
    cnt(root,count);
    return count;
}