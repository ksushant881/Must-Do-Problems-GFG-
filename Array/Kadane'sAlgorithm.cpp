#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        vector<int>sums(n,0);
        sums[0]=arr[0];
        int ans=sums[0];
        for(int i=1;i<n;i++){
            sums[i]=max(sums[i-1]+arr[i],arr[i]);
            ans=max(ans,sums[i]);
        }
        return ans;
    }
};

int main(){

}