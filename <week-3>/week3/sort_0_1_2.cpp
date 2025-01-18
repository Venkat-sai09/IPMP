#include <bits/stdc++.h>
using namespace std;
typedef struct node {
    int data;
    node* next;

    node(int x) {
        data = x;
        next = NULL;
    }
} nd;
nd* sort(nd*head){
    if(head==NULL || head->next==NULL) return head;
    nd* z=new node(-1);
    nd* o=new node(-1);
    nd* t=new node(-1);
    nd* temp=head;
    while(temp){
        if(temp->data==0){
            z->next=temp;
            temp=temp->next;
            z=z->next;
        }else if(temp->data==1){
            o->next=temp;
            temp=temp->next;
            o=o->next;
        }else{
            t->next=temp;
            temp=temp->next;
            t=t->next;
        }
    }
    z->next=o->next;
    o->next=t->next;
    t->next=NULL;
    return z->next;
}
