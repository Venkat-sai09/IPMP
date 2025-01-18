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
Node* rotate(Node* head, int k) {
    // Your code here
    Node* e=head;
    int c=1;;
    while(e->next!=NULL){
        c++;
        e=e->next;
    }
    k=k%c;
    if(k==0) return head;
    k--;
    Node* t=head;
    while(k){
        k--;
        t=t->next;
    }
    e->next=head;
    head=t->next;
    t->next=nullptr;
    return head;
}