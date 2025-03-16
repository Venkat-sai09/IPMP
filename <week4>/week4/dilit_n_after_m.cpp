#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
Node* linkdelete(Node* head, int n, int m) {
        // code here
        Node* temp=head;
        Node* t=NULL;
        while(1){
            int a=m;
            int b=n;
            while(a&&temp){
                t=temp;
                a--;
                temp=temp->next;
            }
            while(b&&temp){
                temp=temp->next;
                b--;
            }
            t->next=temp;
            if(temp==NULL){
                break;
            }
        }
        t->next=temp;
        return head;
    }