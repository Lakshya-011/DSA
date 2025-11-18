#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    // Destructor
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory free for node with data "<< value <<endl;;
    }
};
void InsertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;;
}
void DeleteNode(Node* &head, Node* &tail,int pos){
    if(pos==1){
        Node* temp=head;
        head=head->next;

        if(temp==tail){
            tail==NULL;
        }

        // Free the memory of deleted node
        temp->next=NULL;
        delete temp;
        return;
    }
    
    else{
        Node* curr=head;
        Node* prev=NULL;

        int c=1;
        while(c<pos){
            prev=curr;
            curr=curr->next;
            c++;
        }
        if(curr == tail){
        tail = prev;
    }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
// Print LL
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* n1=new Node(20);

    Node* head=n1;
    Node* tail=n1;
    // print(head);
    cout<<"Before deletion :"<<endl;
    InsertAtTail(tail,25);
    InsertAtTail(tail,35);
    InsertAtTail(tail,45);
    InsertAtTail(tail,55);
    print(head); 

    cout<<"After Deletion: "<<endl;
    DeleteNode(head,tail,5);
    print(head);

    cout<<"Head: "<<head->data;
    cout<<endl<<"Tail: "<<tail->data;


}