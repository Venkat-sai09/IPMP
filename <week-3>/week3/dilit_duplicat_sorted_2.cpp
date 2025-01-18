#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nxt=NULL;   
        while(curr){
            nxt=curr->next;
            bool has_duplicat=false;
            while(nxt && curr->val==nxt->val ){
                has_duplicat=true;
                nxt=nxt->next;
            }
            if(has_duplicat){
                if(curr==head){
                    head=nxt;
                }else prev->next=nxt;
            }else{
                prev=curr;
            }
            curr=nxt;
        }
        return head;
    }