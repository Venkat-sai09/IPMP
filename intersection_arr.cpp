#include<bits/stdc++.h>
using namespace std;
void intersect(int* arr1,int* arr2,int *arr3,int n,int m,int*k){
    int i=0,j=0,s=0;
    while(i<n&&j<m){
        if(arr1[i]==arr2[j]){
            if(k==0){
                arr3[s++]=arr1[i++];
            }else{
                if(arr3[s-1]!=arr1[i]){
                    arr3[s++]=arr1[i++];
                    j++;
                }else{
                    i++;
                    j++;
                }
            }
        }else {
            (arr1[i]<arr2[j])?i++:j++;
        }
    }
    *k=s;
}
int main(){
    int n,m;
    cout<<"Enter size of first array: ";
    cin>>n;
    int *arr1=new int[n];
    cout<<"enter size of second array: ";
    cin>>m;
    int *arr2=new int[m];
    cout<<"Enter elements of first array: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements of second array: ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    int*arr3 = new int[n+m];
    int k=0;
    intersect(arr1,arr2,arr3,n,m,&k);
    for(int i=0;i<k;i++){
        cout<<arr3[i]<<" ";
    }
}