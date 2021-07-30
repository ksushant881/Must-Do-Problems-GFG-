#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution1{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        // Your logic here
        int c=0;
        for(int i=1;i<=n;i++){
            int curr=i;
            while(curr!=0){
                c++;
                curr=(curr&(curr-1));
            }
        }
        return c;
    }
};

class Solution2{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        // Your logic here
        int res=0;
        vector<int>dp(n+1,-1);
        for(int i=n;i>=1;i--){
            if(dp[i]==-1){
                int curr=i;
                int c=0;
                while(curr!=0){
                    c++;
                    curr=(curr&(curr-1));
                }
                dp[i]=c;
                res+=c;
            }
            else{
                res+=dp[i];
            }
        }
        // for(auto x:dp){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        return res;
    }
};

class Solution3{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        // Your logic here
        if(n==0) return 0;
        int x=log2(n);
        return ((pow(2,x-1)*x) + (n-pow(2,x)+1) + countSetBits(n-pow(2,x)));
    }
};

int main(){

}