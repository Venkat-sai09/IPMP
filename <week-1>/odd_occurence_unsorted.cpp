#include<iostream>
#include<vector>
using namespace std;
vector<int> non_repeat(vector<int>&a){
    int t=0;
    for(int i=0;i<a.size();i++){
        t=t^a[i];
    }
    t=t&(-t);
    int x=0,y=0;
    for(int i=0;i<a.size();i++){
        if((a[i]&t)==0) x^=a[i];
        else y^=a[i];
    }
    if(x<y) return {x,y};
    else return {y, x};
}
int main(){
    vector<int> v;
    cout<<"enter size=";
    int n,x;
    cin>>n;
    cout<<"enter elements=";
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    vector<int> result=non_repeat(v);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}