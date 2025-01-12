#include<bits/stdc++.h>
using namespace std;
bool check(vector<vector<int>>&v,int k){
    int m=v.size();
    int n=v[0].size();
    int i=0,j=n-1;
    while(j>0&&i<m){
        if(k==v[i][j]) return true;
        else if(k<v[i][j]) j--;
        else i++;
    }
    return false;
}
int main(){
    vector<vector<int>> v;
    int m,n,k;
    cout<<"enter rows and columns resp=";
    cin>>m>>n;
    cout<<"enter elements=";
    for(int i=0;i<m;i++){
        vector<int> t;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            t.push_back(x);
        }
        v.push_back(t);
    }
    cout<<"enter target=";
    cin>>k;
    if(check(v,k)) cout<<"true";
    else cout<<"false";
}