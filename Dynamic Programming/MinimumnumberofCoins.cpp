#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> minPartition(int n)
    {
        // code here
        vector<int>denominations={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
        vector<int>res;
        int count=0;
        for(int i=denominations.size()-1;i>=0;i--){
            while(n>=denominations[i]){
                n-=denominations[i];
                res.push_back(denominations[i]);
            }
        }
        return res;
    }
};

int main(){

}