#include<bits/stdc++.h>
using namespace std;
int check_sum(vector<int>&v){
    int l=0,r=0,p=0;
    int n=v.size();
    for(int i=1;i<n;i++){
        r+=v[i];
    }
    for(int i=1;i<n-1;i++){
        l+=v[i-1];
        r-=v[i];
        if(l==r){
            return i+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter array size=";
    cin>>n;
    cout<<"enter elements=";
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    cout<<"the index is "<<check_sum(v);
    
}