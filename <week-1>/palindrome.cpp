#include<bits/stdc++.h>
using namespace std;
bool check_palindrom(int n){
    if(n<0){
        return false;
    }
    int t=n,c=0;
    while(t){
        c=c*10+(t%10);
        t/=10;
        if(c>INT_MAX)  return false;
    }
    return c==n;
}
int main(){
    int s;
    cout<<"enter number=";
    cin>>s;
    if(check_palindrom(s)){
        cout<<"it is palindrome";
    }else{
        cout<<"not a palindrome";
    }
}