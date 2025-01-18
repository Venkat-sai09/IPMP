#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
void reorderList(ListNode* head) {
    if(!head||!head->next||!head->next->next) return ;
    stack<ListNode*>ndst;
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode* curr=slow->next;
    slow->next=NULL;
    while(curr){
        ndst.push(curr);
        curr=curr->next;
    }
    ListNode* t=head;
    while(!ndst.empty()){
        ListNode* a=ndst.top();
        ndst.pop();
        a->next=t->next;
        t->next=a;
        t=a->next;
    }
    
}