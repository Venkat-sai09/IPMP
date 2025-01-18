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
Node* divide(Node* head) {
    // code here
    Node* o=new Node(-1);
    Node* e=new Node(-1);
    Node* temp=head;
    Node* oh=o;
    Node* eh=e;
    while(temp){
        if((temp->data)%2){
            o->next=temp;
            temp=temp->next;
            o=o->next;
        }else{
            e->next=temp;
            temp=temp->next;
            e=e->next;
        }
    }
    e->next=oh->next;
    o->next=NULL;
    return eh->next;
}