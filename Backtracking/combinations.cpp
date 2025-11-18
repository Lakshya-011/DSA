 #include<bits/stdc++.h>
 using namespace std;
 void solve(int s,vector<vector<int>>& res,vector<int>& ans,int n,int k){
        if(ans.size()==k){
            res.push_back(ans);
            return;
        }
        for(int i=s;i<=n;i++){
            ans.push_back(i);
            solve(i+1,res,ans,n,k);
            ans.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        vector<vector<int>> res;
        solve(1,res,temp,n,k);
        return res;
    }

    int main(){
        int n;
        cout<<"Enter number: ";
        cin>>n;
        int k;
        cout<<"Enter target: ";
        cin>>k;
        vector<vector<int>> res=combine(n,k);
        cout<<"Possible combinations: ";
        for (auto &vec : res) {
        cout << "[ ";
        for (int x : vec) cout << x << " ";
        cout << "]\n";
    }
    }