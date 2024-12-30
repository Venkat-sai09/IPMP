#include<bits/stdc++.h>
using namespace std;
long long get_col_num(string s){
    int l=s.length();
    int i=l-1;
    long long t=0;
    long long p=1;
    while(i>=0){
        t=t+(s[i]-'A'+1)*p;
        p=p*26;
        i--;
    }
    return t;
}
int main(){
    string s;
    cout<<"enter string=";
    cin>>s;
    long long l=get_col_num(s);
    cout<<"the column number is="<<l;
}