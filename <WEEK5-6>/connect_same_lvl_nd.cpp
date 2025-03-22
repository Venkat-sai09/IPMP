#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node* next_right;
};

vector<vector<int>> levelOrder(Node *root) {
    vector<vector<int>> a; 
    if (!root) return a; 
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int s = q.size();
        vector<int> level; 
        Node* prev = NULL; 

        for (int i = 0; i < s; i++) {
            Node* k = q.front();
            q.pop();
            level.push_back(k->data);

            if (prev) prev->next_right = k;
            prev = k; 

            if (k->left) q.push(k->left);
            if (k->right) q.push(k->right);
        }

        prev->next_right = NULL; 
        a.push_back(level);
    }

    return a;
}
