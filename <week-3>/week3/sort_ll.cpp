#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* sortList(ListNode* head) {
        map<int,int>mpp;
        ListNode* temp=head;
        while(temp){
            mpp[temp->val]++;
            temp=temp->next;
        }
        temp=head;
        for(auto x:mpp){
            while(x.second){
                temp->val=x.first;
                temp=temp->next;
                x.second--;
            }
        }
        return head;
    }