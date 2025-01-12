#include<bits/stdc++.h>
using namespace std;
int atmostk(const vector<int>& nums,int k){
    int n=nums.size();
    int l=0;
    int c=0;
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
        while(mpp.size()>k){
            mpp[nums[l]]--;
            if(mpp[nums[l]]==0){
                mpp.erase(nums[l]);
            }
            l++;
        }
        c+=(i-l+1);
    }
    return c;
}

int subarraysWithKDistinct(vector<int>& nums, int k) {
    return atmostk(nums,k)-atmostk(nums,k-1);
}