#include<bits/stdc++.h>
using namespace std;
vector<int> repeatedNumber(const vector<int> &A) {
    vector<int>a(2);
    long long n1 = A.size();
    long long  i=0;
    long long s,t=0,p,r=0;
    s=(n1*(n1+1))/2;
    p=(n1*(n1+1)*(2*n1+1))/6;
    for(i=0;i<n1;i++){
        t+=A[i];
        r+=A[i]*1LL*A[i];
        
    }
    long long sq_diff=r-p;
    long long diff=t-s;
    long long sum=sq_diff/diff;
    long long repeated=(sum+diff)/2;
    long long missing=sum-repeated;
    a[0]=repeated;
    a[1]=missing;
    return a;   
}
int main() {
    vector<int> A = {3, 1, 2, 5, 3};
    vector<int> result = repeatedNumber(A);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}