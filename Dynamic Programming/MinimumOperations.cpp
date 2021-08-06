#include<bits/stdc++.h>
using namespace std;

class Solution1
{
  public:
    int rec(int curr,int steps,int n){
        if(curr > n){
            return INT_MAX;
        }
        if(curr == n){
            return steps;
        }
        return min(rec(curr+1,steps+1,n),rec(curr*2,steps+1,n));
    }
    int minOperation(int n)
    {
        //code here.
        return 1+rec(1,0,n);
    }
};

class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        int steps=0;
        while(n!=1){
            if(n&1){
                n--;
                steps++;
            }
            else{
                n/=2;
                steps++;
            }
        }
        return 1+steps;
    }
};

int main(){
    Solution s;
    cout<<s.minOperation(8);
}