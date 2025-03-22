#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
bool isBST(Node* root) {
    // Your code here
    Node* curr=root;
    Node* pr=nullptr;
    int pr_v=INT_MIN;
    while(curr){
        if(!curr->left){
            if(curr->data<=pr_v) return false;
            pr_v=curr->data;
            curr=curr->right;
        }else{
            pr=curr->left;
            while(pr->right!=NULL && pr->right!=curr){
                pr=pr->right;
            }
            if(!pr->right){
                pr->right=curr;
                curr=curr->left;
            }
            else{
                pr->right=nullptr;
                if(curr->data<=pr_v) return false;
                pr_v=curr->data;
                curr=curr->right;
            }
        }
    }
    return true;
}