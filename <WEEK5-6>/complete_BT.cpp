#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
bool isCompleteBT(Node* root) {
    // code here
    if(root==NULL) return true;
    queue<Node* > q;
    q.push(root);
    bool t=false;;
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp->left){
            if(t) return false;
            q.push(temp->left);
        }else{
            t=true;
        }
        if(temp->right){
            if(t) return false;
            q.push(temp->right);
        }else{
            t=true;
        }
    }
    return true;
}