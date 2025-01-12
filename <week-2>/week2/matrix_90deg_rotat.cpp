#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> rotat(vector<vector<int>> v){
    int m=v.size();
    int n=v[0].size();
    vector<vector<int>> res(n,vector<int>(m));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            res[j][m-i-1]=v[i][j];
        }
    }
    return res;
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
    vector<vector<int>> res=rotat(v);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[0].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}