#include<bits/stdc++.h>
using namespace std;
vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int a,b,l=0,r=0,sum=0;
        int n=arr.size();
        while(r<n){
            sum+=arr[r];
            
            while(sum>target){
                sum-=arr[l];
                l++;    
            }
            if(sum==target){
                return {l+1,r+1};
            }
            r++;
        }
        return {-1};
    }