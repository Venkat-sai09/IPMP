//duplicate_number
//linked list concept
//detecting loop in linked list
#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
}
int main(){
    int n;
    cout<<"enter size of array=";
    cin>>n;
    cout<<"enter elements of array=";
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<findDuplicate(nums);
    return 0;
}