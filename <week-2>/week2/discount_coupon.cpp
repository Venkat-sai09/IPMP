#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // your code goes here
        int witcp=x;
        int nocp=0;
        for(int i=0;i<n;i++){
            if(a[i]>y){
                witcp=witcp+a[i]-y;
            }
            nocp+=a[i];
        }
        if(witcp<nocp){
            cout<<"coupon"<<endl;
        }else{
            cout<<"NO COUPON"<<endl;
        }
    }

}
