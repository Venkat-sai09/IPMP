#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter array size=";
    cin>>n;
    int* a=new int[n];
    cout<<"enter elements=";
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    for(int i=0;i<n;i++){
        while(a[i]>0 && a[i]<=n&& a[a[i]-1]!=a[i]){
            int t=a[i];
            a[i]=a[a[i]-1];
            a[t-1]=t;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]!=i+1){
            cout<<i+1<<"is missing";
            break;
        }
    }
}