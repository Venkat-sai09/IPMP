#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter size=";
    cin>>n;
    int* a=new int[n];
    cout<<"enter elements from 1 to n+1=";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    int tot=((n+2)*(n+1))/2;
    cout<<"missing element="<<tot-sum;
}