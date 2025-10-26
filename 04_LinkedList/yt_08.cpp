// linked list -- deletion at position using function

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

Node *head = NULL;
Node *tail = head;

void insertAtEnd(int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = head;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

Node *prevv = NULL;

void deleteAtPosition(int position)
{
    Node *curr = head;
    if (head == NULL)
    {
        return;
    }
    else if (position == 1)
    {
        Node *temp = head;
        if (head->next != NULL)
        {
            head = head->next;
        }
        delete temp;
    }

    else
    {
        while (position - 1 > 0)
        {
            prevv = curr;
            curr = curr->next;
            position--;
        }
        if (curr->next != NULL)
        {
            prevv->next = curr->next;
        }
        else
        {
            prevv->next = NULL;
        }
        delete curr;
    }
}

void display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << ((temp->next == NULL) ? "" : " -> ");
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    for (int i = 0; i < arr.size(); i++)
    {
        insertAtEnd(arr[i]);
    }

    cout << "----Before Deletion----" << endl;
    display();
    deleteAtPosition(5);
    cout << "----After Deletion----" << endl;
    display();
}