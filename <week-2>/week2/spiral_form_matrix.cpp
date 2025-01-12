#include<bits/stdc++.h>
using namespace std;
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
    
    int a=0,b=m-1,c=0,d=n-1;
    while(a<=b&&c<=d){
        int i=a,j;
        for(j=c;j<=d;j++){
            cout<<v[i][j]<<" ";            
        }
        j--;
        for(i=a+1;i<=b;i++){
            cout<<v[i][j]<<" ";
        }
        i--;
        for(j=d-1;j>=c;j--){
            cout<<v[i][j]<<" ";
        }
        j++;
        for(i=b-1;i>a;i--){
            cout<<v[i][j]<<" ";
        }
        a++;
        b--;
        c++;
        d--;
        
    }
}