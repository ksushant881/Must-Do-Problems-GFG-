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


vector<int> leftView(Node *root)
{
   // Your code here
    queue<Node*>q;
    vector<int>res;
    if(root==NULL) return res;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            Node*curr=q.front();
            q.pop();
            if(i==0) res.push_back(curr->data);
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
    }
    return res;
}

int main(){

}