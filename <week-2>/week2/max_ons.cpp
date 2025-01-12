#include<bits/stdc++.h>
using namespace std;
int bst(vector<int>v,int st,int end){
    int indx=-1;
    while(st<=end){
    int mid=(st+end)/2;
        if(v[mid]){
            indx=mid;
            end=mid-1;
        }else{
            st=mid+1;
    }
    }
    return indx;
}
int max_ones(vector<vector<int>>&v){
    int id;
    int max=0;
    int mx_row=-1;
    for(int i=0;i<v.size();i++){
        id=bst(v[i],0,v[i].size()-1);
        if(id!=-1&&v[i].size()-id>max){
            max=v[i].size()-id;
            mx_row=i;
            
        }
    }
    return mx_row;
}

int main(){
    int m,n;
    cout<<"enter size of 2d-array m,n resp"<<endl;
    cin>>m>>n;
    vector<vector<int>>v;
    cout<<"enter elements of 2d-array"<<endl;
    for(int i=0;i<m;i++){
        vector<int>temp;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    cout<<"row with max is "<<max_ones(v)<<endl;

}