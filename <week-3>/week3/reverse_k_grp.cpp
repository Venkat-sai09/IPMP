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
Node *reverseKGroup(Node *head, int k) {
    // Complete this method
    if(!head||k<=1) return head;
    int cnt=0;
    Node* temp=head;
    while(temp && cnt<k){
        temp=temp->next;
        cnt++;
    }
    if(cnt<k){
        k=cnt;
    };
    cnt=0;
    Node* prev=NULL;
    Node* curr=head;
    Node* nxt=NULL;
    while(curr&&cnt<k){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
        cnt++;
    }
    head->next=reverseKGroup(nxt,k);
    return prev;
}