#include<bits/stdc++.h>

using namespace std;
bool isSafe(vector<vector<int>>& matrix,int n, int x, int y,vector<vector<int>> visited ){
    if((x>=0 && x<n)&& (y>=0 && y<n) && visited[x][y]==0 && matrix[x][y]==1)
    return true;
    else
    return false;
}
void solve(vector<vector<int>>& matrix, int n, int x, int y, vector<string>& ans, vector<vector<int>> visited, string path ){

    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }

    visited[x][y]=1;
    // Down
    int newx=x+1;
    int newy=y;
    if(isSafe(matrix,n,newx,newy,visited)){
        path.push_back('D');
        solve(matrix,n,newx,newy,ans,visited,path);
        path.pop_back();
    }

    // Left
    newx=x;
    newy=y-1;
    if(isSafe(matrix,n,newx,newy,visited)){
        path.push_back('L');
        solve(matrix,n,newx,newy,ans,visited,path);
        path.pop_back();
    }

    // Right
    newx=x;
    newy=y+1;
    if(isSafe(matrix,n,newx,newy,visited)){
        path.push_back('R');
        solve(matrix,n,newx,newy,ans,visited,path);
        path.pop_back();
    }

    // Up
    newx=x-1;
    newy=y;
    if(isSafe(matrix,n,newx,newy,visited)){
        path.push_back('U');
        solve(matrix,n,newx,newy,ans,visited,path);
        path.pop_back();
    }

    visited[x][y]=0;
}
vector<string> maze(vector<vector<int>>& matrix){
     vector<string> ans;

     if(matrix[0][0]==0)
     return ans;
     int x=0,y=0;
     int n=matrix.size();

    vector<vector<int>> visited=matrix;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=0;
        }
    }
    string path="";
    solve(matrix,n,x,y,ans,visited,path);
    return ans;
}
int main(){
    int r;
    cout<<"Enter row : ";
    cin>>r;
    int c;
    cout<<"Enter column: ";
    cin>>c;

    vector<vector<int>> matrix(r,vector<int> (c));

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }

    vector<string> res= maze(matrix);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}