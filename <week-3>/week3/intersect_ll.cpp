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

Node* findIntersection(Node* head1, Node* head2) {
    // code goes here.
    Node* temp1=head1;
    Node* temp2=head2;
    Node* head=new Node(-1);
    Node* temp=head;
    while(temp1!=NULL&&temp2!=NULL){
        if(temp1->data==temp2->data){
            temp->next=new Node(temp1->data);
            temp=temp->next;
            temp1=temp1->next;
            temp2=temp2->next;
        }else if(temp1->data>temp2->data) temp2=temp2->next;
        else temp1=temp1->next;
    }
    return head->next;
}