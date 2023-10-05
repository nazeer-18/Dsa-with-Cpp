#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int val) {
            data = val;
            next=NULL;
        }
};
void insertAtHead(Node* &head, int val) {
    Node* n = new Node(val);
    Node* temp = head;
    if(head==NULL) {
        head=n;
        n->next=head;
        return;
    }
    n->next=head;
    while(temp->next!=head) temp=temp->next;
    temp->next=n;
    head = n;
}
void insertAtTail(Node* &head,int val) {
    if(head==NULL) {
        insertAtHead(head,val);
        return;
    }
    Node* n = new Node(val);
    Node*temp =head;
    while(temp->next!=head) temp = temp->next;
    temp->next = n;
    n->next=head;
}
void deleteAtHead(Node*&head) {
    if(head==NULL || head->next==head) {
        delete head;
        return;
    }
    Node* temp = head;
    while(temp->next!=head) {
        temp=temp->next; 
    }
    temp->next = head->next;
    delete(head);
    head = temp->next;
}
void deletion(Node* &head,int pos) {
    if(pos<1) return;
    if(pos==1) {
        deleteAtHead(head);
        return;
    }
    Node* temp =head;
    int counter=1;
    while(counter!=pos-1 && temp->next!=head) {
        counter++;
        temp=temp->next;
    }
    if(temp->next==head) return;
    Node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void display(Node* head) {
    if(head==NULL) return;
    Node* temp =head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    while(head!=temp);
    cout<<"NULL"<<endl;
}
int main()
{
    Node* head=NULL;
    insertAtTail(head,5);
    insertAtTail(head,4);
    insertAtHead(head,8);
    insertAtTail(head,7);
    display(head); 
    deletion(head,4);
    deleteAtHead(head);
    deleteAtHead(head);
    display(head); 
    return 0;
}