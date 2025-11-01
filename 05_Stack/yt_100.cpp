#include<iostream>
#include<vector>
using namespace std;

class Stack{
    int *arr;
    int size;
    int top;
    
    public:
    Stack(int s){
        size = s;
        top = -1;
        arr = new int[s];
    }

    void push(int value){
        if(top == size-1){
            cout<<"stack is overflow!"<<endl;
            return;
        }
        top++;
        cout<<value<<" is successfully push!!!!!";
        arr[top] = value;
    }
    
    void pop(){
        if(top == -1){
            cout<<"stack is underflow";
            return;
        }
        cout<<arr[top]<<" is deleted from the stack";
        top--;
    }

    int peek(){
        if(top == -1){
            cout<<"stack is empty";
            return -1;
        }
        return arr[top];
    }

    void display(){
        cout<<"\nElement of stack is : ";
        for(int i=0; i<=top; i++){
            cout<<arr[i];
        }
        cout<<endl;
    }


};

int main(){
    Stack st(5);
    cout<<"---Stack details----"<<endl;
    cout<<"Enter 1 -> push\nEnter 2 -> pop\nEnter 3 -> peek\nEnter 4 -> Exit"<<endl;
    int num;
    while(num != 5){
        cout<<"\nEnter the number: ";
        cin>>num;
        if(num == 1) {
            cout<<"\nEnter the push value : ";
            int val;
            cin>>val;
            st.push(val);
        } else if(num == 2){
            st.pop();
        } else if(num == 3){
            cout<<"\nTop of stack element is : "<<st.peek();
        } else if(num == 4){
            st.display();
        } else if(num == 5) {
            cout<<"Exit!!";
        }
        
        
        else {
            cout<<"\nEnter the correct number !!!!";
        }
    }

}