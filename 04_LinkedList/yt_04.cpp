// insert at given position using function

#include<iostream>
#include<vector>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

Node* head = NULL;
Node* tail = head;

void insertAtEnd(int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = head;
    }
    Node* temp = head;
    tail->next = newNode;
    tail = tail->next;
}

void insertAtPosition(int value, int position){
    
    Node* newNode = new Node(value);

    Node* temp = head;
    for(int i=1; i<position-1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    
}

int main(){

    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(4);

    insertAtPosition(5,3);

    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<((temp->next == NULL)? "": " -> ");
        temp = temp->next;
    }

}