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
Node* sortedMerge(Node* head1, Node* head2) {
    // code here
    Node* temp1=head1;
    Node* temp2=head2;
    Node* head= new Node(-1);
    Node* temp=head;
    while(temp1&&temp2){
        if(temp1->data<=temp2->data){
            temp->next=temp1;
            temp1=temp1->next;
            temp=temp->next;
        }else{
            temp->next=temp2;
            temp2=temp2->next;
            temp=temp->next;
        }
    }
    while(temp1){
        temp->next=temp1;
        temp1=temp1->next;
        temp=temp->next;
    }
    while(temp2){
        temp->next=temp2;
        temp2=temp2->next;
        temp=temp->next;
    }
    return head->next;
}