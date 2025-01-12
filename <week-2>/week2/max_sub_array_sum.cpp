#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(vector<int> &arr) {
        // code here...
        int maxend=arr[0];
        int t=arr[0],t1;
        for(int i=1;i<arr.size();i++){
            maxend=max(maxend+arr[i],arr[i]);
            t=max(t,maxend);
        }
        return t;
    }