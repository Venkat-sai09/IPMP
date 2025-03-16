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
long long m=1000000007;
long long multiplyTwoLists(Node *first, Node *second) {
        // code here
        long long num1=0,num2=0;
        while(first){
            num1=(num1*10+first->data)%m;
            first=first->next;
        }
        while(second){
            num2=(num2*10+second->data)%m;
            second=second->next;
        }
        return (num1*num2)%m;
    }