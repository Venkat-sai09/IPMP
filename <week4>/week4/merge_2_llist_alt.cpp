#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
vector<Node *> merge(Node *head1, Node *head2) {
    Node *curr1 = head1;
    Node *curr2 = head2;
    while (curr1 != NULL && curr2 != NULL){
        Node *ptr1 = curr1->next;
        Node *ptr2 = curr2->next;
        curr2->next = curr1->next;
        curr1->next = curr2;
        curr1 = ptr1;
        curr2 = ptr2;
    }

    return {head1, curr2};
}