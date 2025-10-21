#include<iostream>
#include<vector>
using namespace std;

struct Node{
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
    tail->next = newNode;
    tail = newNode;
}

void deleteAtBeginning(){
    if(head == NULL){
        cout<<"linked list is empty"<<endl;
    }
    Node* temp=head;
    head = temp->next;
    delete temp;
}

void display(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<((temp->next == NULL)?"": " -> ");
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    for(int i=0; i<arr.size(); i++){
        insertAtEnd(arr[i]);
    }

    cout<<"----Before Deletion----"<<endl;
    display();
    deleteAtBeginning();
    cout<<"----After Deletion----"<<endl;
    display();
}