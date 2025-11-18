#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete this->next;
            this->next=NULL;
        }
        cout<<"Memory freed for data : "<<val<<endl;
    }
};
void InsertNode(Node* &tail,int element, int d){
    // Empty list
    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        temp->next=temp;
    }
    else{
        // Assuming element exists in list
        // Non-empty list
        Node* curr=tail;

        while(curr->data!=element){
            curr=curr->next;
        }
        // Element found ie curr is now at the node with data element
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;

    }
}
void DeleteNode(Node* &tail, int val){
    if(tail==NULL){
        cout<<"List is Empty!";
        return;
    }
    else{
        // Assuming that valur is present in list
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=val){
            prev=prev->next;
            curr=curr->next;
        }
        prev->next=curr->next;
        // If there is onlt one node
        if(curr==prev){
            tail=NULL;
        }
        // More than or equal to 2 node
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
void print(Node* tail){
    Node* temp=tail;
    // Empty list
    if(tail == NULL){
        cout<<"List is Empty!";
        return;
    }
    // Atlease one node
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
    }
int main(){
    Node* tail=NULL;
    InsertNode(tail,10,10);
    // InsertNode(tail,10,20);
    // InsertNode(tail,20,30);
    // InsertNode(tail,30,40);
    // InsertNode(tail,40,60);
    // InsertNode(tail,40,50);
    print(tail);

    DeleteNode(tail,10);
    print(tail);
}