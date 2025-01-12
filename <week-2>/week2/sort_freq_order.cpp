#include<bits/stdc++.h>
using namespace std;
#define ppi  pair<int,int>
class Compare{
    public:
        bool operator()(const pair<int,int>&a,const pair<int,int>&b){
            if(a.first==b.first){
                return a.second>b.second;
            }
            return a.first<b.first;
        }
};
void sort_freq(vector<int>&v){
    int n=v.size();
    unordered_map<int,int> mpp;
    for(int x:v){
        mpp[x]++;
    }
    priority_queue<ppi,vector<ppi>,Compare>m;
    for(auto&l:mpp){
        m.push({l.second,l.first});
    }
    int i=0;
    while(!m.empty()){
        int val=m.top().second;
        int freq=m.top().first;
        while(freq--){
            v[i++]=val;
        }
        m.pop();
    }

}
int main(){
    int n;
    cout<<"enter size=";
    cin>>n;
    vector<int>v;
    cout<<"enter elements=";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"after sorting "<<endl;
    sort_freq(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";    
    }

}