#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
int getMaxWidth(Node* root) {
    if(root==NULL) return 0;
    queue<Node*> q;
    int max_w=0;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        max_w=max(max_w,size);
        for(int i=0;i<size;i++){
            Node* nd=q.front();
            q.pop();
            if(nd->left) q.push(nd->left);
            if(nd->right) q.push(nd->right);
            
        }
    }
    return max_w;
}