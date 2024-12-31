#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cout<<"enter test cases=";
    cin>>t;
    while(t--){
        int n,m;
        cout<<"enter no. of words=";
        cin>>n;
        cout<<"enter char capacity of 1st strip=";
        cin>>m;
        vector<string> words(n);
        cout<<"enter strings=";
        for(int i = 0;i<n;i++){
            cin>>words[i];
        }
        int length = 0;
        int x = 0;
        for(int i =0;i<n;++i){
            if(length + words[i].length()<=m){
                length += words[i].length();
                x++;
            }else{
                break;
            }
        }
        cout<<x<<endl;
    }
    return 0;

}