//brute forces gives code with time complexity O(n^2) and space complexity O(1)
//hashing method runs with time complexity O(n) and space complexity O(n)
//Optimized code gives time complexity O(n) and space complexity O(1)
//optimized code--
#include<iostream>
using namespace std;
int find_odd(int*arr,int size){
    int res=arr[0];
    for(int i=1;i<size;i++){
        res=res^arr[i];
    }
    return res;
}
int main(){
    int n;
    cout<<"enter size of array=";
    cin>>n;
    int*arr=new int[n];
    cout<<"enter elements=";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the odd number of times occuring is "<<find_odd(arr,n);
}