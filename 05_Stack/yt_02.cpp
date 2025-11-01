// reverse the stack

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Stack{
    public:
    void reverseString(vector<char> &s){
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            st.push(s[i]);
        }

        int i=0;
        while(!st.empty()){
            s[i] = st.top();
            st.pop();
            i++;
        }
    }

    void display(vector<char> s){
        for(int i =0; i<s.size(); i++){
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Stack st;

    vector<char> s = {'a','b','c','d','e'};
    cout<<"----Before reverse----";
    st.display(s);
    cout<<"----After reverse----";
    st.reverseString(s);
    st.display(s);
}