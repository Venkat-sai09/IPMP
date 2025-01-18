#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
    int data;
    Node* next;
}nd;
nd* creatnod(int x){
    nd* temp=new nd();
    temp->data=x;
    temp->next=NULL;
    return temp;
}
void revers_print(nd* temp){
    if(temp==NULL) return;
    revers_print(temp->next);
    cout<<temp->data<<" ";
}
nd* insert(nd* head,int x){
    nd* temp=creatnod(x);
    if(head==NULL) return temp;
    nd* temp1=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;
    return head;
}
int main(){
    nd* head=NULL;
    int n;
    cout<<"Enter the number of elements in the linked list: ";
    cin>>n;
    cout<<"Enter the elements of the linked list: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        head=insert(head,x);
    }
    revers_print(head);
    return 0;
}