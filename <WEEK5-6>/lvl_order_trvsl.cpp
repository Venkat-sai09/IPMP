#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
vector<vector<int>> levelOrder(Node *root) {
    // Your code here
    vector<vector<int>> a;
    
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int s=q.size();
        vector<int>b;
        for(int i=0;i<s;i++){
            Node* k=q.front();
            b.push_back(k->data);
            if(k->left) q.push(k->left);
            if(k->right) q.push(k->right);
            q.pop();
        }
        a.push_back(b);
    }
    return a;
}