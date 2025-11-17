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
void levelorder(Node* root){
    if(root==NULL)
    return;
    queue <Node*> q;
    q.push(root);

    while(!q.empty()){
        int s=q.size();
        while(s--){
        Node* temp=q.front();
        q.pop();
        cout<<temp->data<<" ";

        if(temp->left){
            q.push(temp->left);
            }
        if(temp->right){
            q.push(temp->right);
            }
        }
    cout<<endl;
    }
}
int main(){
    Node* root=NULL;
    vector<int> res;
    cout<<"Enter root: ";
    root=buildtree();
    cout<<"Level order traversal: "<<endl;
    levelorder(root);
    
}

