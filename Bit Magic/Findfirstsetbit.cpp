#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution1
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        string bin="";
        int count=0;
        while(n!=0){
            count++;
            string x=to_string(n%2);
            if(x=="1"){
                return count;
            }
            bin+=x;
            n=n/2;
        }
        return 0;
    }
};

class Solution2
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        return log2(n&-n)+1;
    }
};

int main(){

}