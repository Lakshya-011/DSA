#include<iostream> 
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

void InsertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void InsertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getsize(Node* &head){
    int l=0;
    Node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
int main(){
    Node* n1=new Node(20);
    Node* head=n1;
    // print(head);
    Node* tail=n1;
    // InsertAtHead(head,30);
    // InsertAtHead(head,40);
    // InsertAtHead(head,50);
    // InsertAtHead(head,60);

    InsertAtTail(tail,30);
    InsertAtTail(tail,40);
    InsertAtTail(tail,50);
    InsertAtTail(tail,60);
    print(head);
    cout<<"Length of LL: "<<getsize(head);
}