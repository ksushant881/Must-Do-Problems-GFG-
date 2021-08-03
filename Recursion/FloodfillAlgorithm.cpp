#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution {
public:
    void fill(vector<vector<int>>&g,int n,int m,int i,int j,int newColor,vector<vector<bool>>&visited){
        int prev=g[i][j];
        g[i][j] = newColor;
        visited[i][j]=true;
        if(i-1>=0 && visited[i-1][j]==false && g[i-1][j] == prev){
            fill(g,n,m,i-1,j,newColor,visited);
        }
        if(i+1<n && visited[i+1][j]==false && g[i+1][j] == prev){
            fill(g,n,m,i+1,j,newColor,visited);
        }
        if(j-1>=0 && visited[i][j-1]==false && g[i][j-1] == prev){
            fill(g,n,m,i,j-1,newColor,visited);
        }
        if(j+1<m && visited[i][j+1]==false && g[i][j+1] == prev){
            fill(g,n,m,i,j+1,newColor,visited);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& g, int sr, int sc, int newColor) {
        // Code here 
        
        int n=g.size();
        int m=g[0].size();
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        fill(g,n,m,sr,sc,newColor,visited);
        return g;
    }
};

int main(){

}