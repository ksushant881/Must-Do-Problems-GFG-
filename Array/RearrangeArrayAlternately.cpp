#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int last=n-1;
    	int first=0;
    	int maxElement = arr[n-1]+1;
        int maxIndex=n-1;
        int minIndex=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                arr[i] = arr[i] + arr[maxIndex]%maxElement * maxElement;
                maxIndex--;
            }
            else{
                arr[i] = arr[i] + arr[minIndex]%maxElement *maxElement;
                minIndex++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i] = arr[i]/maxElement;
        }
    }
};

int main(){

}