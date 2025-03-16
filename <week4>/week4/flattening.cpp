#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
struct Compare {
    bool operator()(Node* a, Node* b) {
        return a->data > b->data;  
    }
    };

    Node* flatten(Node* root) {
        if (!root) return NULL;
        priority_queue<Node*, vector<Node*>, Compare> pq;
        while (root) {
            pq.push(root);
            root = root->next;
        }
        Node* head = NULL;
        Node* tail = NULL;
        while (!pq.empty()) {
            Node* smallest = pq.top();
            pq.pop();
            if (!head) {
                head = tail = smallest; 
            } else {
                tail->bottom = smallest;
                tail = smallest;
            }
            if (smallest->bottom) {
                pq.push(smallest->bottom);
            }
        }
        return head;
    }