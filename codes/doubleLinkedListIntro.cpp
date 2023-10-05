#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node*next,*previous;
        Node(int val) {
            data = val;
            next = NULL;
            previous = NULL;
        }
};
void insertAtTail(Node* &head, int val) {
    Node * n = new Node(val);
    if(head==NULL) {
        head=n;
        return;
    } 
    Node * temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
        temp->next=n;
        n->previous = temp;
}
void insertAtHead(Node* & head, int val) {
    Node * n = new Node(val);
    n->next = head;
    if(head!=NULL)
        head -> previous = n;
    head=n;
}
void display(Node* head) {
    Node * temp = head;
    if(head!=NULL)
        cout<<" NULL <=> ";
    while(temp!=NULL) {
        cout<<temp->data<<" <=> ";
        temp = temp -> next;
    }
    cout<<" NULL "<<endl;
}
void deleteNode(Node* & head, int pos) {
    Node * temp = head;
    int counter = 1;
    if(pos==1) {
        head = head -> next;
        head-> previous = NULL;
        delete temp;
        return;
    }
    while(temp!=NULL && counter != pos) {
        counter++;
        temp = temp -> next;
    }
    if(temp!= NULL) {
        if(temp->next!=NULL) {
            temp->next->previous = temp->previous;
        }
        temp->previous->next = temp-> next;
        delete temp;
    }
}
int main()
{
    Node * head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtHead(head,0);
    display(head);
    deleteNode(head,5);
    display(head);
    return 0;
}