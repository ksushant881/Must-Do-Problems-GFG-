#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution{
  public:
    int MissingNumber(vector<int>& arr, int n) {
        // Your code goes here
        int xorr=arr[0];
        for(int i=1;i<n-1;i++){
            xorr = xorr^arr[i];
        }
        for(int i=1;i<=n;i++){
            xorr = xorr^i;
        }
        return xorr;
    }
};

int main(){

}