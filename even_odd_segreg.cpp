#include<iostream>
#include<vector>
using namespace std;
void seper(vector<int>&a){
    int l=0;
    int h=a.size()-1;
    while(l<h){
        if(!(a[l]%2)){
            l++;
        }else if(a[h]%2){
            h--;
        }else if(((a[l]%2)!=0)&&((a[h]%2)==0)){
            swap(a[l],a[h]);
            l++;
            h--;
        }
    }
}
int main(){
    int n;
    cout<<"enter size=";
    cin>>n;
    cout<<"enter elements=";
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    seper(a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}