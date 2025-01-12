#include<bits/stdc++.h>
using namespace std;
int sum_clos(vector<int>&v){
    sort(v.begin(),v.end());
    int d=INT_MAX;
    int a=0,b=v.size()-1;
    int c;
    while(a<b){
        c=v[a]+v[b];
        if(c==0){
            return 0;
        }else {
            if(abs(c)<abs(d)){
                d=c;
            }
            if(c>0){
                b--;
            }else{
                a++;
            }
        }
    }
    return d;
}
int main() {
    vector<int> v;
    int n;
    cout<<"enter size=";
    cin>>n;
    cout<<"enter elements=";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout <<"close sum is "<< sum_clos(v);
    return 0;
}