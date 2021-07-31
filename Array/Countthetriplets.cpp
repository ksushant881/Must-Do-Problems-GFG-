#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            st.insert(arr[i]);
        }
        int c=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(st.find(arr[i]+arr[j])!=st.end()){
                    c++;
                }
            }
        }
        return c;
	}
};

int main(){

}