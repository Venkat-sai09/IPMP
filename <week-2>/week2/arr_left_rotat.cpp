#include<bits/stdc++.h>
using namespace std;
void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        for(int i=0;i<d;i++){
            swap(arr[i],arr[d-i-1]);
        }
        for(int i=d;i<n;i++){
            swap(arr[i],arr[n+d-i-1]);
        }
        for(int i=0;i<n;i++){
            swap(arr[i],arr[n-i-1]);
        }
        
    }