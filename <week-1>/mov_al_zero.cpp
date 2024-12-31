#include<iostream>
#include<vector>
using namespace std;
void arranj(vector<int>&a){
    int c=0,j=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>0){
            c++;
        }
    }
    int i=0;
    while(i<c){
        if(a[i]>0){
            i++;
            j++;
        }else if(j<=i){
            j++;
        }else if(a[j]==0){
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