#include<bits/stdc++.h>
using namespace std;
vector<int> find3Numbers(vector<int> &arr) {
    // Code here
    int n=arr.size();
    if(n<3){
        return {};
    }
    vector<int> l(n,INT_MAX);
    vector<int> r(n,INT_MIN);
    for(int i=1;i<n;i++){
        l[i]=min(l[i-1],arr[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        r[i]=max(r[i+1],arr[i+1]);
    }
    for(int i=1;i<n-1;i++){
        if((arr[i]>l[i])&&(arr[i]<r[i])){
            return { l[i],arr[i],r[i]};
        }
    }
    return {};
}