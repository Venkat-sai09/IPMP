#include<bits/stdc++.h>
using namespace std;
void booleanMatrix(vector<vector<int>>& mat) {
        // code here
        int col0=mat[0][0];
        int row0=mat[0][0];
        int m=mat.size();
        int n=mat[0].size();
        for (int i=0;i<m;i++) {
            if (mat[i][0] == 1) col0 = 1;
        }
        for (int i = 0; i < n; i++) {
            if (mat[0][i] == 1) row0 = 1;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(mat[i][j]){
                        mat[0][j]=1;
                        mat[i][0]=1;
                }
            }
        }
        for(int i=1;i<m;i++){
            if(mat[i][0]){
                for(int j=1;j<n;j++){
                    mat[i][j]=1;
                }
            }
        }
        for(int j=1;j<n;j++){
            if(mat[0][j]){
                for(int i=1;i<m;i++){
                    mat[i][j]=1;
                }
            }
        }
        if(row0){
            for(int i=0;i<n;i++){
                   mat[0][i]=1;
            }
        }
        if(col0){
            for(int i=0;i<m;i++){
                   mat[i][0]=1;
            }
        }
    }