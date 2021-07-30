#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

        class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            d=d%16;
            int left=(((n<<d)&(0xffff))|((n>>(16-d))&(0xffff)));
            int right=(((n>>d)&(0xffff))|((n<<(16-d))&(0xffff)));
            vector<int>v={left,right};
            return v;
        }
};

int main(){
    
}