#include <iostream>
#include <vector>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node* head = NULL;
Node* tail = head;

void insertAtBeginning(int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = head;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void deletionAtBeginning(){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    head= head->next;
    delete temp;
}

void display(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<((temp->next == NULL)?"": " -> ");
        temp = temp->next;
    }
}

int main(){
    insertAtBeginning(2);
    insertAtBeginning(4);
    insertAtBeginning(6);
    insertAtBeginning(8);
    cout<<"----Before Deletion----"<<endl;
    display();
    deletionAtBeginning();
    cout<<"\n----After Deletion----"<<endl;
    display();
}