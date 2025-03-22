#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
int minValue(Node* root) {
    // Code here
    Node* temp=root;
    while(temp->left!=nullptr){
        temp=temp->left;
    }
    return temp->data;
}