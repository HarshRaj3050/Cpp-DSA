#include <iostream>
#include <vector>
using namespace std;

class Stack
{ 
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
            cout<<"stack is overflow!!"<<endl;
            return;
        }
        top++;
        arr[top] = value;
        cout<<"pushed "<<value<<" into the stack"<<endl;;
    }

    void pop(){
        if(top == -1){
            cout<<"stack is underflow!!"<<endl;
            return;
        }
        cout<<"poped "<<arr[top]<<" from the stack"<<endl;
        top--;
    }

    int peek(){
        if(top == -1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }

    int isSize(){
        return top+1;
    }

    bool isEmpty(){
        if(top == -1){
            cout<<"stack is empty!!";
        }
    }
};

main()
{
    Stack st(5);

    int n=0;
    switch(n != 5){
        case 1:
            int num;
            cout<<"Enter the Number: ";
            cin>>num;
            st.push(num);
            break;
        case 2:
            st.pop();


            break;
        case 3:
            int value = st.peek();
            if (st.isSize() != 0)
            {
                cout << value << endl;
            }
            break;
    }
}
