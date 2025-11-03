// new value insert at bottom in the stack

#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

class Stack{

    public:
    void insertAtBottomm(vector<int> &arr, int value){
        stack<int> temp;

        for(int i=0; i<arr.size(); i++){
            temp.push(arr[i]);
        }

        arr.resize(arr.size()+1); 
        int i = 0;
        arr[i] = value;
        while(!temp.empty()){
            i++;
            arr[i] = temp.top();
            temp.pop();
        }
    }

    void display(vector<int> arr){
        for(int i=0; i<arr.size(); i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Stack st;
    vector<int> arr = {5,2,3,5,1};

    st.display(arr);
    st.insertAtBottomm(arr, 8);
    st.display(arr);



}