#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	// Your code here
    	int even=(n&(0xAAAAAAAA));
        int odd=(n&(0x55555555));
        return ((odd<<1)|(even>>1));
    }
};


int main(){

}