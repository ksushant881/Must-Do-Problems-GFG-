#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; 

class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
       queue<Node*>q;
       if(root == NULL) return;
       q.push(root);
       while(!q.empty()){
           int n=q.size();
           for(int s=0;s<n;s++){
                Node *curr = q.front();
                q.pop();

                if(s == n-1){
                    curr->nextRight=NULL;
                }
                else{
                    curr->nextRight = q.front();
                }

                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
            }
       }
    }    
      
};

int main(){

}