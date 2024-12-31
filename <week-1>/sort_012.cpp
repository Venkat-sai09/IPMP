#include<bits/stdc++.h>
using namespace std;
void arranj(vector<int>&a){
    int c0=0,c1=0,c2=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==0){
            c0++;
        }else if(a[i]==1){
            c1++;
        }else{
            c2++;
        }
    }
    int i=0,j=0;
    while(i<c0){
        if(a[i]==0){
            i++;
        }else if(j<i){
            j++;
        }else if(a[j]!=0){
            j++;
        }else {
            swap(a[i],a[j]);
        }
    }
    i=c0;
    j=c0;
    while(i<(c0+c1)){
        if(a[i]==1){
            i++;
        }else if(j<i){
            j++;
        }else if(a[j]!=1){
            j++;
        }else {
            swap(a[i],a[j]);
        }
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