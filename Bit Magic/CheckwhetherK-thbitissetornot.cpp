#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution1
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
        //cout<<n<<" "<<(1<<k)<<endl;
        if((n & (1<<(k))) == 0){
            return false;
        }
        else
            return true;
    }
};

class Solution2
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
        //cout<<n<<" "<<(1<<k)<<endl;
        if(((n>>k) & 1) == 0){
            return false;
        }
        else
            return true;
    }
};

int main(){
    Solution2 s;
    cout<<s.checkKthBit(76,4);//11110 & 
                            //  01000
}