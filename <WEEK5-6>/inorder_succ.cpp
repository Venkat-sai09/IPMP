#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
Node* getleft(Node* root) {
    Node* temp = root;
    while (temp && temp->left) {
        temp = temp->left;
    }
    return temp;
}
int inOrderSuccessor(Node *root, Node *x) {
    if (root == nullptr || x == nullptr) return -1;
    if (x->right) {
        Node* t = getleft(x->right);
        return t ? t->data : -1;
    }
    Node* succ = nullptr;
    Node* t = root;
    while (t) {
        if (x->data < t->data) {
            succ = t;
            t = t->left;
        } else if (x->data > t->data) {
            t = t->right;
        } else {
            break;
        }
    }
    return succ ? succ->data : -1;
}