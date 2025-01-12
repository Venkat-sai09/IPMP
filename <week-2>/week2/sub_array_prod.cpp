#include<bits/stdc++.h>
using namespace std;
int maxProduct(vector<int> &arr) {
        // Your Code Here
        int n=arr.size();
        int maxim=INT_MIN;
        int lr=1,rl=1;
        for(int i=0;i<arr.size();i++){
            if(lr==0) lr=1;
            if(rl==0) rl=1;
            lr*=arr[i];
            rl*=arr[n-i-1];
            //int maxim1=max(lr,rl);
            maxim=max({maxim,lr,rl});
        }
        return maxim;
    }