#include <bits/stdc++.h>
using namespace std;
typedef struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} Node;
vector<Node*> alternatingSplitList(struct Node* head) {
    // Your code here
    Node* ah=new Node(-1);
    Node* bh=new Node(-1);
    Node* a=ah;
    Node* b=bh;
    Node* t=head;
    int c=0;
    while(t){
        if(!(c%2)){
            a->next=t;
            a=a->next;
        }else{
            b->next=t;
            b=b->next;
        }
        c++;
        t=t->next;
    }
    a->next=NULL;
    b->next=NULL;
    return {ah->next,bh->next};
}