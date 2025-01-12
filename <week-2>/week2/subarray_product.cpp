#include<bits/stdc++.h>
using namespace std;
int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int c=0,n=nums.size();
        int l=0,r=0;
        int p=1;
        while(r<n){
            p*=nums[r];
            while(p>=k&&l<=r){
                p=p/nums[l];
                l++;
            }
            if(p<k){
                c=c+(r-l+1);
            }
            r++;
        }
        return c;
    }