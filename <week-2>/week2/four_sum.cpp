#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>>v;
    sort(nums.begin(),nums.end());
    int n=nums.size();
    for(int i=0;i<n-3;i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
        for(int j=i+1;j<n-2;j++){
                if (j > i+1 && nums[j] == nums[j - 1]) continue;
            int a=j+1;
            int b=n-1;
            long long c=(long long)target-nums[i]-nums[j];
            while(a<b){
                if(c==(long long)nums[a]+nums[b]){
                    v.push_back({ nums[i],nums[j],nums[a],nums[b]});
                    a++;
                    b--;
                    while (a < b && nums[a] == nums[a - 1]) a++;
                    while (a < b && nums[b] == nums[b + 1]) b--;
                }else if(c<(long long)nums[a]+nums[b]){
                    b--;
                }else{
                    a++;
                }
            }
        }
    }
    return v;
}
