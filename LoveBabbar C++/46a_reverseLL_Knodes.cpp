// Reverse Linked List in K Groups

#include <bits/stdc++.h> 
/****************************************************************
    Following is the Linked List node structure

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

// #############################################
Node* kReverse(Node* head, int k) {
    //base case
    if(head==NULL){
        return head;
    }

    //step1=> Reverse first k nodes
    Node *curr=head;
    Node *forw=NULL;
    Node *prev=NULL;
    int cnt=0;
    while(cnt<k && curr!=NULL){
        forw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forw;
        cnt++;
    }

    // step2=>aage ka step recursion karega
    if(forw!=NULL){
        head->next=kReverse(forw,k);
    }

    //return head of reverse linked list ,which is previous
    return prev;

}

// ###################################