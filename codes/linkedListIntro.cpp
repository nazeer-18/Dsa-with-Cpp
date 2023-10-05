#include <iostream>
using namespace std;
/*
    Node is not an inbuilt datatype so we define it
*/
class Node
{
public:
    /*
        This is Node class here we give implementation of Node
        Every Node has 2 fields data and next
        data .. we are taking it as int . It can be of any data type (int/char/float..etc)
        next its a pointer which points to next Node so it will storing address of Node object so its pointer of type Node
    */
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
/*
    if we want to append a value to linked list at end then we use this function
*/
void insertAtTail(Node *&head, int val)
{
    /*
        passing head by refferrence so we should store this address in any temporary pointer and modify it
        rather than modifying head directly
        if any changes are made to head pointer it directly repplicates those in the linked list
    */
    Node *n = new Node(val);
    /*
        it creates a new Node whose data is equal to val and it points to Null now we should append this to linked list
    */
    if (head == NULL)
    {
        head = n;
        return;
    }
    /*
        if head is pointing to NULL it means there are no elements in the linked list
        so we make our n as the head node and return
        now head is pointer n which points to null and has data = val
    */
    Node *temp = head;
    /*
        A ponter of type Node to traverse the linked list
        temp->next gives the next part of current Node (temp)
        if temp->next is NULL it means temp is the last Node
    */
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    /*
        temp is last Node so temp should point to new Node
        we will change the next part of temp to n
        as next of n is already pointing to NULL it will be the tail
    */
    temp->next = n;
}
void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);
    n->next = head;
    head = n;
}
bool search(Node *head, int key)
{
    while (head != NULL)
    {
        if (head->data == key)
            return true;
        head = head->next;
    }
    return false;
}
void deleteAtHead(Node *&head)
{
    Node *todelete = head;
    head = head->next;
    delete todelete;
}
void deleteNode(Node *head, int val)
{
    if (head == NULL)
        return;
    if (head->data == val)
    {
        deleteAtHead(head);
        return;
    }
    Node *temp = head;
    while (temp->next != NULL && temp->next->data != val)
    {
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        if (temp->data == val)
        {
            delete temp;
        }
        return;
    }
    Node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void display(Node *head)
{
    /*
        A function to print the linked list
        starting from head as we are taking only value not by refferrence we can directly alter head it wont replicate in linked list
        when its null it wont have any data so we exit the loop and at each iteration we change pointer to next nodes address
    */
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}
Node *reverse(Node *&head)
{
    Node *previous = NULL;
    Node *current = head;
    Node *next;
    while (current != NULL)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    // Here previous will be pointing to last Node
    return previous;
}
Node *reverseRecursive(Node *&head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}
Node *reverseK(Node *&head, int k)
{
    Node *previous = NULL;
    Node *current = head;
    Node *next;
    int counter = 0;
    while (counter < k && current != NULL)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
        counter++;
    }
    if (next != NULL)
        head->next = reverseK(next, k);
    return previous;
}
bool detectCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
void makeCycle(Node *&head, int pos)
{
    Node *temp = head;
    Node *targetNode;
    int counter = 1;
    while (temp->next != NULL)
    {
        if (counter == pos)
        {
            targetNode = temp;
        }
        counter++;
        temp = temp->next;
    }
    temp->next = targetNode;
}
void removeCycle(Node *&head)
{
    Node *slow = head;
    Node *fast = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);
    fast = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}
int getLength(Node *head)
{
    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}
Node *appendLastkNodes(Node *&head, int k)
{
    int len = getLength(head);
    k%=len;
    if(k==0) return head;
    Node* newHead,*newTail,*temp=head;
    while(temp->next!=NULL) {
        if(len == k + 1) {
            newTail = temp;
        }
        len--;
        temp = temp->next;
    }
    temp->next = head;
    newHead = newTail->next;
    newTail->next=NULL;
    return newHead;
}
void intersect(Node* &head1,Node* & head2,int pos) {
    // adds pos Node of head1 to next of head2 last Node
    Node * temp1 = head1;
    pos--;
    while(pos-- && temp1!=NULL) {
        temp1 = temp1->next;
    }
    Node* temp2 = head2;
    while(temp2->next!=NULL) {
        temp2 = temp2->next;
    }
    if(temp1!=NULL) {
        temp2 -> next = temp1;
    }
}
int intersection(Node*& head1, Node* &head2) {
    int k = abs(getLength(head1) - getLength(head2));
    Node*i,*j;
    if(getLength(head1)>getLength(head2)) {
        i = head1;
        j = head2;
    }
    else{
        i = head2;
        j = head1;
    }
    for(int j = 1; j <= k; j++) {
        if(i==NULL) return -1;
        i = i->next;
    }
    while(i!=NULL && j!=NULL) {
        if(i==j) return i->data;
        i=i->next;
        j=j->next;
    }
    return -1;
}
Node* merge(Node* &head1,Node* &head2) {
    Node* merged = new Node(-1),*temp1=head1,*temp2=head2;
    Node* temp3 = merged;
    while(temp1!=NULL && temp2!=NULL) {
        if(temp1->data<temp2->data) {
            temp3->next = temp1;
            temp1=temp1->next;
        }
        else{
            temp3->next=temp2;
            temp2 = temp2->next;
        }
        temp3 = temp3->next;
    }
    while(temp1!=NULL) {
        temp3->next = temp1;
        temp1 = temp1->next;
        temp3 = temp3->next;
    }
    while(temp2!=NULL) {
        temp3 -> next = temp2;
        temp2= temp2 -> next;
        temp3 = temp3 -> next;
    }
    return merged->next;
}
Node* mergeRecursive(Node* &head1, Node* &head2) {
    Node * result;
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;
    if(head1->data<head2->data) {
        result = head1;
        result->next = mergeRecursive(head1->next,head2);
    }
    else {
        result = head2;
        result -> next = mergeRecursive(head1,head2->next);
    }
    return result;
}
void evenAfterOdd(Node* &head) {
    if(head==NULL) return;
    Node* odd = head;
    Node* even = head->next;
    Node* evenStart = head->next;
    while(odd->next!=NULL && even->next!=NULL) {
        odd->next = even->next;
        odd=odd->next;
        even->next = odd->next;
        even=even->next;
    }
    odd->next = evenStart;
}
int main()
{
    /*
        Initially linked list is empty
    */
    //Node *head = NULL;
    //insertAtTail(head, 1);
    //insertAtTail(head, 2);
    //insertAtTail(head, 3);
    // insertAtHead(head,0);
    // insertAtHead(head,-1);
    //insertAtTail(head, 4);
    //insertAtTail(head, 5);
    //insertAtTail(head, 6);
    //display(head);
    // cout<<search(head,4)<<endl;
    // cout<<search(head,10)<<endl;
    // deleteNode(head,4);
    // deleteAtHead(head);
    // display(head);
    // newHead = reverse(head);
    // display(newHead);
    // newHead = reverseRecursive(head);
    // display(newHead);
    // newHead = reverseK(head,3);
    // display(newHead);
    // makeCycle(head,3);
    // cout<<detectCycle(head)<<endl;
    // removeCycle(head);
    // cout<<detectCycle(head)<<endl;
    // display(head);
    //Node* newHead = appendLastkNodes(head,2);
    //display(newHead);
    //Node* head2=NULL;
    //insertAtTail(head2,9);
    //insertAtTail(head2,10);
    //intersect(head,head2,5);
    //display(head2);
    //cout<<intersection(head,head2)<<endl;
    Node* head1 =NULL,*head2=NULL;
    insertAtTail(head1,1);
    insertAtTail(head1,4);
    insertAtTail(head1,5);
    insertAtTail(head1,7);
    insertAtTail(head2,2);
    insertAtTail(head2,3);
    insertAtTail(head2,6);  
    //Node* newMerged = merge(head1,head2);
    Node* newMerged = merge(head1,head2);
    display(newMerged);
    evenAfterOdd(newMerged);
    display(newMerged);
    return 0;
}