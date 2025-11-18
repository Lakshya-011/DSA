#include<bits/stdc++.h>
using namespace std;
    void solve(vector<int>& candidates, int target,vector<vector<int>>& ans, vector<int>& temp,int i ){
        if(i==candidates.size()){
            if(target==0){
            ans.push_back(temp);
            }
            return;
        }
        if(candidates[i]<=target){
            temp.push_back(candidates[i]);
        solve(candidates,target-candidates[i],ans,temp,i);
        temp.pop_back();
        }
            solve(candidates,target,ans,temp,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(candidates,target,ans,temp,0);
        return ans;
    }

    int main(){
        int target;
        int n;
        cout<<"Enter no of elements: ";
        cin>>n;
        cout<<"Enter target: ";
        cin>>target;
        vector<int> candidates(n);
        for(int i=0;i<n;i++){
            cin>>candidates[i];
        }

        vector<vector<int>> res=combinationSum(candidates,target);
        cout<<"Possible combinations: ";
        for (auto &vec : res) {
        cout << "[ ";
        for (int x : vec) cout << x << " ";
        cout << "]\n";
    }

    }
