#include<bits/stdc++.h>
using namespace std;
bool bst(vector<int>v,int k,int st,int end){
    while(st<=end){
    int mid=(st+end)/2;
    if(v[mid]==k){
        return true;
    }else if(k>v[mid]){
        return bst(v,k,mid+1,end);
    }else{
        return bst(v,k,st,mid-1);
    }
    }
    return false;
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
    int t=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(bst(v,k-v[i],i+1,n-1)){
            cout<<"true";
            t=10;
            break;
        }
    }
    if(!t){
        cout<<"false";
    }

}