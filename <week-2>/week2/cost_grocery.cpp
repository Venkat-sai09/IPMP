#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        // your code goes here
        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]>=x) c+=b[i];
        }
        cout<<c<<" ";
    }

}