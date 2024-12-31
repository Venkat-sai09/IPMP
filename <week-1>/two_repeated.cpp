//brute forces gives code with time complexity O(n^2) and space complexity O(1)
//hashing method runs with time complexity O(n) and space complexity O(n)
//Optimized code gives time complexity O(n) and space complexity O(1)
//optimized code--
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter size =";
    cin>>n;
    int* a=new int[n];
    cout<<"enter elements=";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=a[0];
    int p=a[0];
    int S=0;
    int r=1;
    for(int i=1;i<n;i++){
        sum+=a[i];
        p*=a[i];
        S+=i;
        r*=i;
    }
    r/=n-1;
    S-=n-1;
    int P=sum-S;
    int Q=p/r;
    int d=sqrt(P*P-4*Q);
    cout<<"the results are "<<(P+d)/2<<" and "<<(P-d)/2;
    
}