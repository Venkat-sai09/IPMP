#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node * next;
    struct Node * random;

    Node(int x){
        data = x;
        next = NULL;
        random = NULL;
    }

};
Node *cloneLinkedList(Node *head) {
        if (head == NULL) {
        return NULL;
    }
    Node* curr = head;
    while (curr != NULL) {
        Node* temp = new Node(curr->data);
        temp->next = curr->next;
        curr->next = temp;
        curr = temp->next;
    }
    curr = head;
    while (curr != NULL) {
        if (curr->random != NULL)
            curr->next->random = curr->random->next;
        curr = curr->next->next;
    }
    curr = head;
    Node* head1 = head->next;
    Node* clone = head1;
    while (clone->next != NULL) {
        curr->next = curr->next->next;
        clone->next = clone->next->next;
        curr = curr->next;
        clone = clone->next;
    }
    curr->next = NULL;
    clone->next = NULL;
    
    return head1;
    }