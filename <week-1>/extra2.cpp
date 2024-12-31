#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cout<<"enter no. of test cases=";
    cin>>t;
    while(t--){
        int n,m,r,c;
        cout<<"enter rows,col,position resp=";
        cin>>n>>m>>r>>c;
        int p=(r-1)*m+c;
        long long total=(long long)(n-r)*(long long)(2*m-1);
        if(c!=m){
            total+=m-c;
        }
        cout<<"result"<<total;
    }

}