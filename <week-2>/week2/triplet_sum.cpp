#include<bits/stdc++.h>
using namespace std;
vector<int>triplet(vector<int>&v,int k){
    int n=v.size();
    for(int i=0;i<n-2;i++){
        int a=i+1,b=n-1;
        int c=k-v[i];
        while(a<b){
            if(v[a]+v[b]==c){
                return {v[i],v[a],v[b]};
            }else if(v[a]+v[b]>c){
                b--;
            }else {
                a++;
            }
        }
    }
        return { };
}
int main(){
    vector<int>v;
    cout<<"enter the size of the array"<<endl;
    int n,k;
    cin>>n;
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"enter target element=";
    cin>>k;
    sort(v.begin(),v.end());
    vector<int>t=triplet(v,k);
    if(!t.empty()){
        for(auto x:t){
            cout<<x<<" ";
        }
    }else{
        cout<<"no triplet";
    }
}