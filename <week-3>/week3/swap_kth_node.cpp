#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        int cnt=0;
        while(temp){
            temp=temp->next;
            cnt++;
        }
        temp=head;
        int a=k-1;
        while(a){
            a--;
            temp=temp->next;
        }
        a=cnt-k;
        ListNode* t=head;
        while(a){
            a--;
            t=t->next;
        }
        a=temp->val;
        temp->val=t->val;
        t->val=a;
        return head;
    }