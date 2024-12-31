//boyer moore voting algorithm

#include<bits/stdc++.h>
using namespace std;
int repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int cand1=0,cand2=0,cnt1=0,cnt2=0;
    int i;
    int n=A.size();
    for(i=0;i<n;i++){
        if(cand1==A[i]){
            cnt1++;
        }else if(cand2==A[i]){
            cnt2++;
        }else if(cnt1==0){
            cand1=A[i];
            cnt1++;
        }else if(cnt2==0){
            cand2=A[i];
            cnt2++;
        }else{
            cnt1--;
            cnt2--;
        }
    }
    cnt1=0;
    cnt2=0;
    for(i=0;i<n;i++){
        if(cand1==A[i]) cnt1++;
    }
    for(i=0;i<n;i++){
        if(cand2==A[i]) cnt2++;
    }
    if(cnt1>(n/3)) return cand1;
    if(cnt2>(n/3)) return cand2;
    
    return -1;
}
int main(){
    vector<int> A ;
    cout<<"enter size of array=";
    int n;
    cin>>n;
    cout<<"enter the elements of array=";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    int k=repeatedNumber(A);
    cout<<"element which is repeated more than n/3 times is="<<k;
}