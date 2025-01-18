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
struct Node* makeUnion(struct Node* head1, struct Node* head2) {
    // code here
    map<int,int>mpp;
    Node* temp1=head1;
    while(temp1!=NULL){
        mpp[temp1->data]++;
        temp1=temp1->next;
    }
    temp1=head2;
    while(temp1!=NULL){
        mpp[temp1->data]++;
        temp1=temp1->next;
    }
    Node* head= new Node(-1);
    Node* t=head;
    for(auto x : mpp){
        t->next=new Node(x.first);
        t=t->next;
    }
    return head->next;
    
}