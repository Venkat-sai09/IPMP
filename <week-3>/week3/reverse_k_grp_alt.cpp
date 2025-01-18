#include <bits/stdc++.h>
using namespace std;
typedef struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} Node;
Node* kAltReverse(Node* head, int k) {
    Node* curr = head;
    Node* next = NULL;
    Node* prev = NULL;
    int count = 0;
    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (head != NULL) {
        head->next = curr;
    }
    count = 0;
    while (count < k - 1 && curr != NULL) {
        curr = curr->next;
        count++;
    }
    if (curr != NULL) {
        curr->next = kAltReverse(curr->next, k);
    }
    return prev;
}

void printList(Node* node) {
    Node* curr = node;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
