#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter the string=";
    cin>>s;
    int l=s.size();
    for(int i=0;i<l/2;i++){
        swap(s[i],s[l-i-1]);
    }
    cout<<s;
}