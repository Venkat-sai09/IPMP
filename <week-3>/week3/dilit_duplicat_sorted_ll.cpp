#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        ListNode* prev=head;
        ListNode* curr=head->next;
        ListNode* nxt=NULL;
        while(curr){
            nxt=curr->next;
            if(prev->val==curr->val){
                ListNode* t=curr;
                curr=nxt;
                prev->next=curr;
                
            }else{
                prev=curr;
                curr=nxt;
            }

        }
        return head;
    }
};