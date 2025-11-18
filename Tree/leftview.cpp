#include<bits/stdc++.h> 
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=this->right=NULL;
    }
};
void solve(Node* root, int level,vector<int>& ans){
        if(root==NULL)
        return;

        if(level==ans.size())
        ans.push_back(root->data);

        solve(root->left,level+1,ans);
        solve(root->right,level+1,ans);
    }
Node* buildtree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node* root=new Node(x);
    cout<<"Enter left child of "<<x<<": ";
    root->left=buildtree();
    cout<<"Enter right child of "<<x<<" : ";
    root->right=buildtree();
    return root;
}
int main(){
    Node* root=NULL;
    vector<int> res;
    cout<<"Enter root: ";
    root=buildtree();
    vector<int> ans;
    solve(root,0,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

