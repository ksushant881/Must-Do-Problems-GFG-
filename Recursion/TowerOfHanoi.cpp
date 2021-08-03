#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    
    long long toh(int N, int from, int to, int aux) {
        // Your code herei
        int c=0;
        if(N==1){
            cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
            c++;
            return c;
        }
        c+=toh(N-1,from,aux,to);
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        c++;
        c+=toh(N-1,aux,to,from);
        return c;
    }

};

int main(){

}