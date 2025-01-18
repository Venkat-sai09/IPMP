#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* swapPairs(ListNode* head) {
    ListNode* temp=head;
    while(temp){
        if(temp->next){
            int c=temp->val;
            temp->val=temp->next->val;
            temp->next->val=c;
            temp=temp->next->next;
        }else{
            temp=temp->next;
        }
    }
    return head;
}