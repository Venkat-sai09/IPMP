#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int>t;
        int n=arr.size();
        
        t.push_back(arr[n-1]);
        
        int rm=arr[n-1];
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=rm){
                t.push_back(arr[i]);
                rm=arr[i];
            }
        }
        reverse(t.begin(),t.end());
        return t;
    }