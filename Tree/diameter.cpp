#include<bits/stdc++.h> 
using namespace std;
int maxi=0;
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
int diameter(Node* root){
    if(root==NULL)
    return 0;

    if(root->left==NULL && root->right==NULL)
    return 1;

    int x=diameter(root->left);
    int y=diameter(root->right);

    maxi=max(maxi,x+y);

    return 1+max(x,y);


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
    diameter(root);
    cout<<maxi;
    
    
}

