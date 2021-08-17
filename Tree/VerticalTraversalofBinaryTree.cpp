#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    void help(Node*root,map<int,vector<int>>&mp){
        if(root==NULL) return;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            Node*currNode=q.front().first;
            int currHorizDist = q.front().second;
            q.pop();
            mp[currHorizDist].push_back(currNode->data);
            if(currNode->left!=NULL) q.push({currNode->left,currHorizDist-1});
            if(currNode->right!=NULL) q.push({currNode->right,currHorizDist+1});
        }
    }
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        map<int,vector<int>>mp;
        help(root,mp);
        vector<int>res;
        for(auto x:mp){
            for(auto y:x.second){
                res.push_back(y);
            }
        }
        return res;
    }
};

int main(){

}