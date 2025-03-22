#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
// Function to convert a binary tree into its mirror tree.
void mirror(Node* node) {
    // code here
    if(!node) return;
    mirror(node->left);
    mirror(node->right);
    swap(node->left,node->right);
}