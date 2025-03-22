#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
int getSize(Node* node) {
    // code here
    if(node==NULL){
        return 0;
    }else return 1+ getSize(node->left)+getSize(node->right);
}