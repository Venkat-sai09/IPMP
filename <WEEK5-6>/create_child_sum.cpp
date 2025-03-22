#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
void convertTree(Node* root) {
    if (!root) return;
    int childSum = 0;

    if (root->left)
        childSum += root->left->data;
    if (root->right)
        childSum += root->right->data;
    if (root->data < childSum) {
        root->data = childSum;
    } 
    else if (root->data > childSum) {
        int diff = root->data - childSum;
        if (root->left) 
            root->left->data += diff;
        else if (root->right)
            root->right->data += diff;
    }
    convertTree(root->left);
    convertTree(root->right);
    childSum = 0;
    if (root->left)
        childSum += root->left->data;
    if (root->right)
        childSum += root->right->data;
    if(root->left || root->right) 
        root->data = childSum;
}
