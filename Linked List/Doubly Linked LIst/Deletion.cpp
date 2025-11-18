#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory free for Node with data: "<<val<<endl;
    }
};
void InsertAtTail(Node* &head,Node* &tail,int d){
    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else{
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void DeleteNode(Node* &head,Node* &tail, int pos){
    if(pos==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
    Node* curr=head;
    Node* pre=NULL;
    int c=1;
    while(c<pos){
        pre=curr;
        curr=curr->next;
        c++;
    }
    if(curr==tail){
        tail=pre;
    }
    curr->prev=NULL;
    pre->next=curr->next;
    // curr->next->prev=pre;
    curr->next=NULL;
    delete curr;
    }
}
int main(){
    Node* n1=new Node(10);
    Node* head=n1;
    Node* tail=n1;
    InsertAtTail(head,tail,20);
    InsertAtTail(head,tail,30);
    InsertAtTail(head,tail,40);
    InsertAtTail(head,tail,50);
    cout<<"Before Deleting: "<<endl;
    print(head);

    DeleteNode(head,tail,5);
    print(head);

    cout<<head->data<<endl;
    cout<<tail->data;

}