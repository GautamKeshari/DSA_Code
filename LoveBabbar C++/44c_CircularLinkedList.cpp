#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    ~Node(){
        int value=this->data;
        if(this->next != NULL){
            delete next; 
            next=NULL;
        }
        cout<<"Memory is free from node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail,int element, int d){   //element is used to compare that after which element node is inserted
    // assuming that element is already present in the list

    //if there is empty node
    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        temp->next=temp;
    }else{
        //non-empty list
        //assuming that the element is present in the list.

        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void print(Node* &tail){
    Node* temp=tail;

    do{
        cout<<temp->data<<" ";
        temp=temp->next; 
    }while(temp!=tail);
    cout<<endl;
}

void deleteNode(Node* &tail,int value){
    if(tail==NULL){
        cout<<"List is empty ,Please check again"<<endl;
    }else{
        Node* prev = tail;
        Node* curr=prev->next;

        //single node left only
        if(curr==prev){
            tail==NULL;
        }

        while(curr->data != value){
            prev=curr;
            curr=curr->next;
        }

        //applying deletion operation
        prev->next=curr->next;

        //if tail element is deleted, then we get segmentation fault, because we cannot pointed tail to any other element.
        curr->next=NULL;
        if(tail==curr){
            tail=prev;
        }
        delete curr;
    }
}

int main(){
    Node* tail=NULL;

    //inserting 3 in empty linked list
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 7);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

    deleteNode(tail,5);
    print(tail);

    deleteNode(tail,10);
    print(tail);

    deleteNode(tail,3);
    print(tail);
}