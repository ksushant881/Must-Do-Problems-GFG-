#include<bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};

/*You are required to complete this method*/
bool cmp(struct val p1,struct val p2){
    return p1.first < p2.first;
}
int maxChainLen(struct val p[],int n)
{
    //Your code here
    vector<int>res(n,1);
    sort(p,p+n,cmp);
    int ans=res[0];
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(p[j].second < p[i].first && res[i] < 1 + res[j]){
                res[i] = 1 + res[j];
                //ans=max(ans,res[i]);
            }
        }
    }
    // for(auto x:res){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    ans = *max_element(res.begin(),res.end());
    return ans;
}

int main(){

}