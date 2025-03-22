#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
vector<int> findSpiral(Node* root) {
    // code here
    vector<int> a;
    int j=0;
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
        if(j%2==0) reverse(b.begin(),b.end());
        a.insert(a.end(),b.begin(),b.end());
        j++;
    }
    return a;
}