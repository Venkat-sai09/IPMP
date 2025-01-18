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
bool isPalindrome(Node *head) {
    // Your code here
    Node* slow=head;
    Node* fast=head;
    while(fast&& fast->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    fast=slow;
    stack<int>ndst;
    while(fast){
        ndst.push(fast->data);
        fast=fast->next;
    }
//        int cnt=0;
    slow=head;
    while(!ndst.empty()){
        int c= ndst.top();
        if(c!=slow->data){
            return false;
        }
        ndst.pop();
        slow=slow->next;
    }
    return true;
}