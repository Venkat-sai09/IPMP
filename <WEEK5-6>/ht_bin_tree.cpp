#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
int ht(Node* node){
    if(node==NULL||(node->left==NULL && node->right==NULL)){
        return 0;
    }else{
        int h1=ht(node->left);
        int h2=ht(node->right);
        return 1+max(h1,h2);
    }
}
// Function to find the height of a binary tree.
int height(Node* node) {
    // code here
    if(node==nullptr) return 0;
    return ht(node);
}