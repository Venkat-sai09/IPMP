#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
void updat(Node* root,int l,int & odd,int & even){
    if(root==NULL){
        return ;
    }else{
        if(l%2==0){
            even+=root->data;
        }else{
            odd+=root->data;
        }
        updat(root->left,l+1,odd,even);
        updat(root->right,l+1,odd,even);
    }
}
int getLevelDiff(Node *root)
{
   //Your code here
   int oddsum=0,evensum=0;
   updat(root,1,oddsum,evensum);
   return oddsum-evensum;
}