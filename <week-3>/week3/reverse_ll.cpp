
#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
    int data;
    Node* next;
}Node;
struct Node* reverseList(struct Node* head) {
    // code here
    // return head of reversed list
    Node* temp=head;
    Node* nd=NULL;
    Node* succ;
    while(temp!=NULL){
        succ=temp->next;
        temp->next=nd;
        nd=temp;
        temp=succ;
    }
    return nd;
}