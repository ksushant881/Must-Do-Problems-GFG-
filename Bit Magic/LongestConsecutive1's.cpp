#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution1
{
    public:
    int maxConsecutiveOnes(int n)
    {
        // code here
        int count=0,ans=0;
        while(n!=0){
            if(n&1) count++;
            else count=0;
            n=(n>>1);
            ans=max(count,ans);
        }
        return ans;
    }
};

class Solution2
{
    public:
    int maxConsecutiveOnes(int n)
    {
        // code here
        int ans=0;
        while(n){
            n=n&(n<<1);
            ans++;
        }
        return ans;
    }
};

int main(){

}