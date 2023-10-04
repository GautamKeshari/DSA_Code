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

};

void reverse(Node* &head,Node* curr,Node* prev){

    //base case
    if(curr==NULL){
        head=prev;
        return;
    }

    Node* forward=curr->next;
    reverse(head,forward,curr);
    //now we have to link all these node whose next node is NULL
    curr->next=prev;
}

Node* ReverseLinkedList(Node* head){

    Node* prev=NULL;
    Node* curr=head;

    reverse(head,curr,prev);
    return head;

}

// Other approach is:
Node *reverse1(Node *head){
    if(head == NULL || head->next=NULL){
        return head;
    }

    Node *chotaHead=reverse1(head->next);

    head=head->next->next;
    head->next=NULL;
    
    return chotaHead;
}

int main(){

}