#include<bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int> &A, int B) {
    int n=A.size();
    vector<int>t(3);
    sort(A.begin(),A.end());
    int d=INT_MAX;
    int a,b,c;
    for(int i=0;i<n-2;i++){
        a=i+1;
        b=n-1;
        int c=B-A[i];
        while(a<b){
            int m=A[a]+A[b]+A[i];
            if(m==B){
                return B;
            }else {
                if((abs(m-B))<d){
                    t[0]=A[i];
                    t[1]=A[a];
                    t[2]=A[b];
                    d=abs(m-B);
                }
                if(A[a]+A[b]>c){
                    b--;
                }else{
                    a++;
                }
            }
        }
        
    }
    return t[0]+t[1]+t[2];
        
}
