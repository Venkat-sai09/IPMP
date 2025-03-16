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
Node* split(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* temp=slow->next;
    slow->next=NULL;
    return temp;
}
Node* merge(Node* a, Node* b) {
    if(a==nullptr) return b;
    if(b==nullptr) return a;
    if(a->data<b->data){
        a->next=merge(a->next,b);
        return a;
    }
    else{
        b->next=merge(a,b->next);
        return b;
    }
}
Node* mergeSort(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* second=split(head);
    head=mergeSort(head);
    second=mergeSort(second);
    return merge(head,second);
}