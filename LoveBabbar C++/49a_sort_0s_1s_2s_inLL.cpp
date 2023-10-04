// https://www.codingninjas.com/codestudio/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTab=0&campaign=YouTube_Lovebabbar31stJan2021&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar31stJan2021

// /********************************
//     class Node
//     {
//     public:
//         int data;
//         Node *next;
//         Node(int data)
//         {
//             this->data = data;
//                this->next = NULL;
//         }
//     };

// ********************************/
// void insertAtTail(Node* &tail, Node* temp){
//     tail->next=temp;
//     tail=temp;
//     // tail->next=NULL;
    
// }


// Node* sortList(Node *head)
// {
//     // Write your code here.
//     if(head==NULL || head->next==NULL) return head;

//     Node *zerohead= new Node(-1);
//     Node *zerotail= zerohead;
//     Node *onehead= new Node(-1);
//     Node *onetail= onehead;
//     Node *twohead= new Node(-1);
//     Node *twotail= twohead;

//     Node *temp=head;
//     while(temp!=NULL){
//         if(temp->data==0){
//             insertAtTail(zerotail,temp);
//         }
//         else if(temp->data==1){
//             insertAtTail(onetail,temp);
//         }
//         else if(temp->data==2){
//             insertAtTail(twotail,temp);
//         }
//         temp=temp->next;
//     }

//     // merge 3 sublist
//         // if 1's list is not empty

//     if(onehead!=NULL){
//         zerotail->next=onehead->next;
//         onetail->next=twohead->next;
//     }else{
//         zerotail->next=twohead->next;
//     }

//     twotail->next=NULL;

//     //setup head
//     head=zerohead->next;

//     // Now we have to delete dummynode; 
//     delete zerohead;
//     delete onehead; 
//     delete twohead;

//     return head;

// }
