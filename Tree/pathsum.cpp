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

bool hasPathSum(Node* root, int targetSum) {
       if(root==NULL){
        return false;
       }
       if(root->left==NULL && root->right==NULL)
       return (root->data==targetSum);

       return (hasPathSum(root->left,targetSum-root->data) || hasPathSum(root->right,targetSum-root->data));
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
    int target;
    cout<<"Enter path sum: ";
    cin>>target; 

    if(hasPathSum(root,target)){
        cout<<"Path Sum Exists!"<<endl;
    }
    else
    cout<<"Path Sum Does Not Exists!"<<endl;
    
}