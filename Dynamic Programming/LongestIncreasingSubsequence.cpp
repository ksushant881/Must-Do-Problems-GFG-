#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<int>dp(n,1);
       int ans=1;
       for(int i=1;i<n;i++){
           for(int j=0;j<i;j++){
               if(a[i] > a[j]){
                   dp[i] = max(dp[i],dp[j]+1);
                   ans=max(ans,dp[i]);
               }
           }
       }
       return ans;
    }
};

class Solution2
{
    public:
    
    int search(vector<int>arr,int target){
        int low=0;
        int high=arr.size()-1;
        int mid;
        while(high > low){
            mid = (high-low)/2 + low;
            //if(arr[mid] == target) return mid;
            if(arr[mid] >= target){
                high=mid;
            }
            else{
                low = mid+1;
            }
        }
        return high;
    }
    
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<int>temp;
       temp.push_back(a[0]);
       //int back = temp[0];
       for(int i=1;i<n;i++){
           if(a[i] > temp.back()){
               temp.push_back(a[i]);
               //back=a[i];
           }
           else{
               int inx = search(temp,a[i]);
               temp[inx] = a[i];
           }
       }
       return temp.size();
    }
};

int main(){

}