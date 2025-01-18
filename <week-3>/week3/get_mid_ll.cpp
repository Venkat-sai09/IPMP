#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
    int data;
    Node* next;
}Node;
int getMiddle(Node* head) {
    // code here
    Node* slow=head;
    Node* fast=head;
    while(fast&&fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}