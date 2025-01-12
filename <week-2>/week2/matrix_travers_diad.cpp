#include <bits/stdc++.h>
using namespace std;
vector<int> downwardDiagonal(int N, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int> v;
		if(N==1){
		    return {A[0][0]};
		}
		int i=0,j=0,x=0,y=0;
		for(i=0;i<N;i++){
		    y=i;
		    x=0;
		    while(y>=0){
		        v.push_back(A[x][y]);
		        x++;
		        y--;
		    }
		}
		for(i=1;i<N;i++){
		    y=N-1;
		    x=i;
		    while(x<N){
		        v.push_back(A[x][y]);
		        x++;
		        y--;
		    }
		}
	    
	    return v;
	}