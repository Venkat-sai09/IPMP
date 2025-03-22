#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
int ht(Node* node,int& d){
    if(node==NULL){
        return 0;
    }else{
        int h1=ht(node->left,d);
        int h2=ht(node->right,d);
        d=max(d, h1+h2);
        return 1+ max(h1,h2);
    }
}
// Function to find the height of a binary tree.

int diameter(Node* root) {
    // Your code here
    int d=0;
    ht(root,d);
    return d;
}