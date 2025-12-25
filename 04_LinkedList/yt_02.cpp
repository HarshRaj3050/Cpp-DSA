// Linked list -- insert at End using recursion

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

Node* insertAtEnd(vector<int> &arr, int index, int size){
    if(index == size){
        return NULL;
    }
    Node* newNode = new Node(arr[index]);
    newNode->next = insertAtEnd(arr, index+1, size);
    return newNode;
};

int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = insertAtEnd(arr, 0, arr.size());

    Node* temp;
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<((temp->next == NULL)?"":" -> ");
        temp = temp->next;
    }
}