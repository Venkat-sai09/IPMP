#include<bits/stdc++.h>
using namespace std;
int maxLen(vector<int> &arr) {
        // Your code here
        map<int,int>mpp;
        int n=arr.size();
        int sum=0;
        int maxlen=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0) arr[i]=-1;
            sum+=arr[i];
            if(sum==0){
                maxlen=max(maxlen,i+1);
            }
            if(mpp.find(sum)!=mpp.end()){
                maxlen=max(maxlen,i-mpp[sum]);
            }else{
                mpp[sum]=i;
            }
        }
        return maxlen;
    }