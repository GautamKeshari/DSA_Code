#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* next1;
    Node* next2;
};

Node* newNode(int key) {
    Node* temp = new Node;
    temp->key = key;
    temp->next1 = nullptr;
    temp->next2 = nullptr;
    return temp;
}

Node* createLL1(int a, int n) {
    if (a > n) {
        return nullptr;
    }
    Node* head = newNode(a);
    Node* temp = head;
    int val = a + a;
    while (val <= n) {
        temp->next1 = newNode(val);
        temp->next2 = nullptr;
        val = val + a;
        temp = temp->next1;
    }
    return head;
}

Node* createLL2(int b, int n) {
    if (b > n) {
        return nullptr;
    }
    Node* head = newNode(b);
    Node* temp = head;
    int v = b + b;
    while (v <= n) {
        temp->next2 = newNode(v);
        temp->next1 = nullptr;
        v = v + b;
        temp = temp->next2;
    }
    return head;
}

void printLL1(Node* head) {
    Node* temp = head;
    if (head == nullptr) {
        return;
    }
    while (temp != nullptr) {
        cout << temp->key << " ";
        temp = temp->next1;
    }
    cout << endl;
}

void printLL2(Node* head) {
    Node* temp = head;
    if (head == nullptr) {
        return;
    }
    while (temp != nullptr) {
        cout << temp->key << " ";
        temp = temp->next2;
    }
    cout << endl;
}

Node* merge(Node* head1, Node* head2) {
    if (head1 == nullptr && head2 == nullptr) {
        return nullptr;
    }
    if (head1 == nullptr) {
        Node* temp = head2;
        while (temp != nullptr) {
            temp->next1 = temp->next2;
            temp = temp->next1;
        }
        return head2;
    }
    if (head2 == nullptr) {
        return head1;
    }
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* head3;
    if (temp1->key < temp2->key) {
        head3 = newNode(temp1->key);
        temp1 = temp1->next1;
    }
    else {
        head3 = newNode(temp2->key);
        temp2 = temp2->next2;
    }
    Node* temp = head3;
    while (temp1 && temp2) {
        if (temp1->key < temp2->key) {
            temp->next1 = newNode(temp1->key);
            temp1 = temp1->next1;
        }
        else if (temp1->key == temp2->key) {
            temp1 = temp1->next1;
            continue;
        }
        else {
            temp->next1 = newNode(temp2->key);
            temp2 = temp2->next2;
        }
        temp = temp->next1;
    }
    while (temp1) {
        temp->next1 = newNode(temp1->key);
        temp1 = temp1->next1;
        temp = temp->next1;
    }
    while (temp2) {
        temp->next1 = newNode(temp2->key);
        temp2 = temp2->next2;
        temp = temp->next1;
    }
    return head3;
}

int main() {
    int n, a, b;
    cout << "Enter the max number: " << endl;
    cin >> n;
    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;
    Node* head1 = createLL1(a, n);
    Node* head2 = createLL2(b, n);
    cout << "printing list1" << endl;
    printLL1(head1);
    cout << "printing list2" << endl;
    printLL2(head2);
    Node* head3 = merge(head1, head2);
    cout << "Printing merged list" << endl;
    printLL1(head3);

    // Free memory
    while (head1 != nullptr) {
        Node* temp = head1;
        head1 = head1->next1;
        delete temp;
    }
    while (head2 != nullptr) {
        Node* temp = head2;
        head2 = head2->next2;
        delete temp;
    }
    while (head3 != nullptr) {
        Node* temp = head3;
        head3 = head3->next1;
        delete temp;
    }

    return 0;
}
