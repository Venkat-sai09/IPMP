#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
    int data;
    Node* next;
}Node;
Node* intersectPoint(Node* head1, Node* head2) {
    // Your Code Here
    int m=0,n=0;
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp1!=nullptr){
        m++;
        temp1=temp1->next;
    }
    while(temp2!=nullptr){
        n++;
        temp2=temp2->next;
    }
    int d;
    if(m>=n){
        temp1=head1;
        temp2=head2;
        d=m-n;
    }else{
        temp2=head1;
        temp1=head2;
        d=n-m;
    }
    while(d!=0){
        temp1=temp1->next;
        d--;
    }
    while(temp1!=NULL){
        if(temp1==temp2) return temp1;
        temp1=temp1->next;
        temp2=temp2->next;
    }
}