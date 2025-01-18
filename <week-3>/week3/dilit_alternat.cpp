#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
}Node;
void deleteAlt(struct Node *head) {
    // Code here
    Node* t=head;
    while(t&&t->next){
        Node* k=t->next;
        t->next=k->next;
        free(k);
        t=t->next;
    }
}