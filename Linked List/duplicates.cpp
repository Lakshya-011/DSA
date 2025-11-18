#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* deleteDuplicates(Node* head) {
        if(!head){
            return head;
        }
        Node* curr=head;
        while(curr && curr->next){
            if(curr->data==curr->next->data){
                curr->next=curr->next->next;
            }
            else
            curr=curr->next;
        }
        return head;
    }
void InsertAtEnd(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=tail->next;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* n1= new Node(10);
    Node* tail=n1;
    Node* head=n1;
    InsertAtEnd(tail,20);
    InsertAtEnd(tail,20);
    InsertAtEnd(tail,40);
    InsertAtEnd(tail,50);
    InsertAtEnd(tail,60);
    InsertAtEnd(tail,70);
    print(head);
    deleteDuplicates(head);
    print(head);
}