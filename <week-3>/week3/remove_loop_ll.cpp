#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
    int data;
    Node* next;
}Node;
void removeLoop(Node* head) {
        // code here
        // just remove the loop without losing any nodes
        Node* slow=head;
        Node* fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                break;
            }
        }
        if(slow!=fast) return;
        slow=head;
        if(slow==fast){
            while(fast->next!=slow){
                fast=fast->next;
            }
        }else{
            while(fast->next!=slow->next){
                slow=slow->next;
                fast=fast->next;
            }
        }
        fast->next=NULL;
    }