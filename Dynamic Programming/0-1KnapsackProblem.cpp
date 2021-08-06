#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int rec(int inx,int currWt,int currVal,int wt[],int val[],int n,int w){
        if(inx == n || w==0){
            return currVal;
        }
        if(wt[inx] > w){
            return rec(inx+1,currWt,currVal,wt,val,n,w);
        }
        return max(rec(inx+1,currWt+wt[inx],currVal+val[inx],wt,val,n,w-wt[inx]),
            rec(inx+1,currWt,currVal,wt,val,n,w)
            );
        }
    

    int knapSack(int w, int wt[], int val[], int n) 
    { 
       // Your code here
        return rec(0,0,0,wt,val,n,w);
    }
};

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int w, int wt[], int val[], int n) 
    { 
       // Your code here
        vector<vector<int>>dp(n+1,vector<int>(w+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=w;j++){
                if(wt[i-1] <= j){
                    dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]],dp[i-1][j]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][w];

    }
};

int main(){

}