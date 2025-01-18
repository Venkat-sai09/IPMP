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
bool check_sum(Node* headA,Node* headB,Node* headC,int x){
    Node* a=headA;
    while(a){
        Node* b=headB;
        Node* c=headC;
        while(b&&c){
            int sum=a->data+b->data+c->data;
            if(sum==x){
                return true;
            }else if(sum<x){
                b=b->next;
            }else{
                c=c->next;
            }
        }
        a=a->next;
    }
    return false;
}