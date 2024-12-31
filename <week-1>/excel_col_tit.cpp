#include<bits/stdc++.h>
using namespace std;
string get_col_tit(int n){
    string s;
    while(n){
        n--;
        s+=(char)(n%26 +'A');
        n/=26;
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    int s;
    cout<<"enter number=";
    cin>>s;
    cout<<"the column tite is="<<get_col_tit(s);
}