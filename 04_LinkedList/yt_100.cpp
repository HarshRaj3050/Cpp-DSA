#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node* head = NULL;
Node* tail = head;

void insertAtEnd(int value)
{
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = head;
    } else {
        tail->next = newNode;
        tail = tail->next;
    }

}

void display(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<((temp->next == NULL)?"": " -> ");
        temp = temp->next;
    }
}

int main()
{
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(4);
    insertAtEnd(5);

    display();
}