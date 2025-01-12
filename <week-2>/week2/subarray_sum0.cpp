#include<bits/stdc++.h>
using namespace std;
bool check_sum(vector<int>&v){
    unordered_set<int>set;
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        if(sum==0||set.find(sum)!=set.end()){
            return true;
        }else{
            set.insert(sum);
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"enter array size=";
    cin>>n;
    cout<<"enter elements=";
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    if(check_sum(v)) cout<<"found a sub-array with sum zero";
    else cout<<"not found";
}