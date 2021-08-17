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

class Solution {
  public:
    void store(Node*root,map<int,int>&mp,int horDist){
        if(root==NULL) return;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            Node*curr=q.front().first;
            int horizontalDistance = q.front().second;
            q.pop();
            mp[horizontalDistance]=curr->data;
            if(curr->left!=NULL) q.push({curr->left,horizontalDistance-1});
            if(curr->right!=NULL) q.push({curr->right,horizontalDistance+1});
        }
    }
    vector <int> bottomView(Node *root) {
        // Your Code Here
        map<int,int>mp;
        store(root,mp,0);
        vector<int>res;
        for(auto x:mp){
            res.push_back(x.second);
        }
        return res;
    }
};

int main(){

}