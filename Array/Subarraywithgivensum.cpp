#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        int sum=0,l=0,i=0;
        bool flag=false;
        while(i<=n){
            if(sum < s){
                sum += arr[i];
                i++;
            }
            else if(sum > s){
                sum -= arr[l];
                l++;
            }
            else
                return {l+1,i};
        }
        return {-1};
    }
};

int main(){
    
}