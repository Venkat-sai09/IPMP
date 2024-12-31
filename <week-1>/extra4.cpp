#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d[n];
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        // your code goes here
        bool r=true;
        for(int i=1;i<n;i++){
            if(d[i]<d[i-1]){
                cout<<"No"<<endl;
                r=false;
                break;
            }
        }
        if(r){
            cout<<"Yes"<<endl;
        }
    }

}
