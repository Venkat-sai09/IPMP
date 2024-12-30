#include<bits/stdc++.h>
using namespace std;
void arranj(vector<int>&a){
    int st=0,e=a.size()-1;
    while(st<e){
        if(a[st]>=0){
            st++;
        }else if(a[e]<0){
            e--;
        }else{
            swap(a[st],a[e]);
        }
    }
    int i=1,j=st;
    while(i<st && j<a.size()){
        swap(a[i],a[j]);
        i+=2;
        j++;
    }

    
}
int main(){
    int n;
    cout<<"enter size=";
    cin>>n;
    vector<int> a(n);
    cout<<"enter elements=";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    arranj(a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}