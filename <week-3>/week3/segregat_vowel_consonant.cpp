#include <bits/stdc++.h>
using namespace std;
typedef struct Node {
    char data;
    Node* next;

    Node(char x) {
        data = x;
        next = NULL;
    }
} Node;
bool check_alpha(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return true;
    }else{
        return false;
    }
}
// Function to rearrange the linked list based on vowels
struct Node *arrangeCV(Node *head) {
    // code here
    Node* vh=new Node('x');
    Node* ch=new Node('x');
    Node* v=vh;
    Node* c=ch;
    Node* t=head;
    while(t){
        if(check_alpha(t->data)){
            v->next=t;
            v=v->next;
        }else{
            c->next=t;
            c=c->next;
        }
        t=t->next;
    }
    v->next=ch->next;
    c->next=NULL;
    return vh->next;
}