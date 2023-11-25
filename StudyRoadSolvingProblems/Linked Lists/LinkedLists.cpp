#include <iostream>

using namespace std;

class Node {
public:
    int Value;
    Node* Next;
};

void printList(Node* n) {
    while(n != NULL) {
        cout << n->Value << endl;
        n = n->Next;
    }
}

void InsertAtTheFront(Node* *head, int newValue) {

    //1. Prepare a new node
    Node* newNode = new Node();
    newNode->Value = newValue;
    //2. Put it in the front of current head
    newNode->Next = *head;
    //3. Move head of the list to point to the newNode
    *head = newNode;
}

void InsertAtTheEnd(Node**head, int newValue) {
    //1. Prepare a newNode
    Node* newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = NULL;
    //2. If linked list is empty, newNode will be a head node
    if(*head == NULL) {
        *head = newNode;
        return;
    }    
    //3. Find the last node;
    Node* last = *head;
    while(last->Next != NULL) {
        last = last->Next;
    }
    //4. Insert the newNode after last node(at the end)
    last->Next = newNode;   
}

void InsertAfter(Node* previous, int newValue) {
    //1. Check if previous NODE is NULL
    if(previous == NULL) { 
        cout << "Previous can not be NULL" << endl;
        return;
    }
    //2. Prepare a newNode
    Node* newNode = new Node();
    newNode->Value = newValue;
    //3. Insert a newNode after previous
    newNode->Next = previous->Next; // A is the pointer to B, by this, we are making sure to don't lost pointer to B forever.
    previous->Next = newNode;


}

int main() 
{

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->Value = 1;
    head->Next = second;
    second->Value = 2;
    second->Next = third;
    third->Value = 3;
    third->Next = NULL;

    InsertAfter(head, 3);
    //InsertAtTheFront(&head, -1);
    //InsertAtTheEnd(&head, 4);
    //InsertAtTheEnd(&head, 5);
    printList(head);

    cin.get();

    delete head;
    delete second;
    delete third;
}