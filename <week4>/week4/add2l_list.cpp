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
Node* reverse(Node* head){
        Node* prev=nullptr;
        Node* curr=head;
        Node* nxt=NULL;
        while(curr!=NULL){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    Node* trim(Node* head){
        if(head!=NULL && head->data==0){
            head=head->next;
        }
        return head;
    }
    Node* add(Node* head1,Node* head2,int carry){
        if(head1==NULL&&head2==NULL){
            return new Node(carry);
        }
        int sum=0;
        if(head1){
            sum+=head1->data;
            head1=head1->next;
        }
        if(head2){
            sum+=head2->data;
            head2=head2->next;
        }
        sum+=carry;
        carry=sum/10;
        sum%=10;
        Node* result=new Node(sum);
        result->next=add(head1,head2,carry);
        return result;
    }
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        num1=trim(num1);
        num2=trim(num2);
        num1=reverse(num1);
        num2=reverse(num2);
        Node* result=add(num1,num2,0);
        result=reverse(result);
        result=trim(result);
        return result;
    }