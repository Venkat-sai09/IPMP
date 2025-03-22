#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
vector<int> leftView(Node *root) {
    // code here
    vector<int> a;
    if(root==nullptr) return {};
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int s=q.size();
        Node* l=q.front();
        q.pop();
        if(l->left) q.push(l->left);
        if(l->right) q.push(l->right);
        a.push_back(l->data);
        for(int i=1;i<s;i++){
            Node* t= q.front();
            q.pop();
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
            
        }
    }
    return a;
}