#include<stdio.h>
#include<stdlib.h>
// link list Node
struct Node{
    int key;
    struct Node *next1;
    struct Node *next2;
};

struct Node* newNode(int key){
    struct Node *temp =(struct Node*)malloc(sizeof(struct Node));
    temp->key=key;
    temp->next1 =NULL;
    temp->next2 =NULL;
    return temp;
}

struct Node *createlist1(int a, int n){
    if(a>n){
        return NULL;
    }
    struct Node* head=newNode(a);
    struct Node *temp=head;
    int val=a+a;
    while(val<=n){
        temp->next1=newNode(val);
        temp->next2=NULL;
        val=val+a;
        temp=temp->next1;

    }
    return head;

}

struct Node *createlist2(int b, int n){
    if(b>n){
        return NULL;
    }
    struct Node*head=newNode(b);
    struct Node*temp=head;
    int v=b+b;
    while(v<=n){
        temp->next2=newNode(v);
        temp->next1=NULL;
        v=v+b;
        temp=temp->next2;
    }
    return head;
}

void printlist1(struct Node *head){
    struct Node *temp =head;
    if(head==NULL){
        return;
    }
    while(temp!=NULL){
        printf("%d-->", temp->key);
        temp=temp->next1;
    }
    printf("\n");
    return;
}

void printlist2(struct Node *head){
    struct Node*temp=head;
    if(head ==NULL){
        return;
    }
    while(temp!=NULL){
        printf("%d-->",temp->key);
        temp =temp->next2;
    }
    printf("\n");
    return;
}

struct Node *merge(struct Node *head1, struct Node *head2){
    if (head1 == NULL && head2==NULL){
        return NULL;
    }
    if (head1==NULL){
        struct Node *temp =head2;
        while(temp!=NULL){
            temp->next1=temp->next2;
            temp=temp->next1;
        }
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    struct Node*temp1 =head1;
    struct Node*temp2 =head2;
    struct Node *head3;
    if(temp1->key < temp2->key){
        head3 = newNode(temp1->key);
        temp1 =temp1->next1;
    }
    else{
        head3= newNode(temp2->key);
        temp2= temp2->next2;
    }
    struct Node *temp=head3;
    while(temp1 && temp2){
        if(temp1->key<temp2->key){
            temp->next1 =newNode(temp1->key);
            temp1=temp1->next1;
        }
        else if(temp1->key ==temp2->key){
            temp1=temp1->next1;
            continue;
        }
        else{
            temp->next1 =newNode(temp2->key);
            temp2 =temp2->next2;
        }
        temp=temp->next1;
    }
    while(temp1){
        temp->next1 = newNode(temp1->key);
        temp1=temp1->next1;
        temp=temp->next1;
    }
    while(temp2){
        temp->next1=newNode(temp2->key);
        temp2=temp2->next2;
        temp=temp->next1;
    }
    return head3;
}


int main(){
    int n,a,b;
    printf("Enter the max number:\n");
    scanf("%d",&n);
    printf("Enter a: \n");
    scanf("%d",&a);
    printf("Enter b: \n");
    scanf("%d",&b);
    struct Node *head1=createlist1(a,n);
    struct Node *head2=createlist2(b,n);
    printf("printing list1\n");
    printlist1(head1);
    printf("printing list2\n");
    printlist2(head2);
    struct Node*head3 =merge(head1,head2);
    printf("Printing merged list\n");
    printlist1(head3);
    return 0;
}