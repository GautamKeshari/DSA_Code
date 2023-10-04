#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data "<< val <<endl;
    }
};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void getLength(Node* &head){
    Node *temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    cout<<len<<endl;
}

void insertAtHead(Node* &head,Node* &tail,int d){

    Node* temp=new Node(d);
    if(head==NULL){
        head=temp;
        tail=temp;       // ***
        return;
    }
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAtTail(Node* &tail,Node* &head,int d){

    Node* temp=new Node(d);
    if(tail==NULL){
        tail=temp;
        head=temp;  // ***
        return;
    }
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPosition(Node* &head,Node* &tail,int d,int pos){
    Node* curr=head;
    Node* temp=new Node(d);

    //for starting case
    if(pos==1){          // 1 base indexing 
        temp->next=head;
        head->prev=temp;
        head=temp;
        return;
    }
    int x=1;
    while(x!=pos-1){
        curr=curr->next;
        x++;
    }

    // for last case
    if(curr->next==NULL){
        insertAtTail(tail,head,d);
        return;
    }
    temp->next=curr->next;
    curr->next->prev=temp;
    curr->next=temp;
    temp->prev=curr;
}

void deletionAtPosition(Node* head,Node* tail,int pos){
    if(pos==1){                    //base case
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr=head;      // curr 1st times point to head ,so no any element is present before this.
        Node* temp=NULL;      // pointing to before element of curr.

        int index=1;
        while(index<pos){
            temp = curr;
            curr = curr->next;
            index++;
        }

        curr->prev = NULL;
        temp->next=curr->next;
        curr->next->prev=temp;
        curr->next=NULL;
        delete curr;
    }

}

int main(){
    // Node* node1 = new Node(10);
    // Node* head = node1;
    // print(head); 
    // Node* tail=node1;      //due to this tail pointer continuosly pointing to last element.

    Node* head=NULL;
    Node* tail=NULL;
    //get length of function

    getLength(head);

    //insertion at starting
    insertAtHead(head,tail,13);
    print(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    insertAtHead(head,tail,19);
    print(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    insertAtHead(head,tail,35);
    print(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    insertAtHead(head,tail,48);
    print(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    //insertion at last
    insertAtTail(tail,head,93);
    print(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    insertAtPosition(head,tail,17,6); //head,data,position
    print(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    insertAtTail(tail,head,47);
    print(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    insertAtHead(head,tail,65);
    print(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    deletionAtPosition(head,tail,3);
    print(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
}