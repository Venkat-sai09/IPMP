#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minp=prices[0];
        int pr=0;
        for(int i=1;i<n;i++){
            int cp=prices[i]-minp;
            pr=max(pr,cp);
            minp=min(minp,prices[i]);
        }
        return pr;
    }