#include<bits/stdc++.h>
using namespace std;
vector<int> product_arr(vector<int>&v){
    int a=1,b=-1,c=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        if(v[i]==0){
            c++;
            b=i;
        }else{
            a*=v[i];
        }
    }
    vector<int> v2(n,0);
    if(c>1) return v2;
    if(c==1){
        v2[b]=a;
        return v2;
    }
    for(int i=0;i<n;i++){
        v2[i]=a/v[i];
    }
    return v2;
    
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
    vector<int>v2=product_arr(v);
    for(int i=0;i<n;i++){
        cout<<v2[i]<<" ";
    }
    
}