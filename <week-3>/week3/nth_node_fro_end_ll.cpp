#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
    int data;
    Node* next;
}Node;
int getKthFromLast(Node *head, int k) {
    // Your code here
    int l=0;
    Node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    if(k>l) return -1;
    int t=l-k+1;
    free(temp);
    temp=head;
    while(t>1){
        temp=temp->next;
        t--;
    }
    return temp->data;
}