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
Node* mergeTwoLists(Node* list1, Node* list2) {
    Node* temp;
        if(list1==NULL && list2== NULL)
        return NULL;
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        if(list1->data<list2->data){
            temp=list1;
            list1=list1->next;
        }
        else{
            temp=list2;
            list2=list2->next;
        }
        Node* dummy=temp;
        while(list1!=NULL && list2!=NULL){
            if(list1->data<list2->data){
            temp->next=list1;
            list1=list1->next;
        }
        else{
            temp->next=list2;
            list2=list2->next;
        }
        temp=temp->next;
        }

        if(list1==NULL){
        temp->next=list2;
        }
        
        if(list2==NULL){
        temp->next=list1;
        }
        return dummy;
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
    Node* n1= new Node(1);
    Node* tail=n1;
    Node* head=n1;
    cout<<"Enter 1st List: ";
    InsertAtEnd(tail,2);
    InsertAtEnd(tail,4);
    print(n1);
    cout<<"Enter 2nd List: ";
    Node* n2=new Node(1);
    Node* tail2=n2;
    InsertAtEnd(tail2,3);
    InsertAtEnd(tail2,4);
    print(n2);
    Node* merged=mergeTwoLists(n1,n2);
    cout<<"Merged List: ";
    print(merged);    
}