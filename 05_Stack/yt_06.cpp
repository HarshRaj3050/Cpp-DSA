#include<iostream>
#include<vector>
#include<stack>
using namespace std;

bool validParentheses(string st){
    stack<char> stack;
    for(int i=0; i<st.size(); i++){
        if(st[i] == '('){
            stack.push(st[i]);
        } else {
            if(stack.empty()){
                return 0;
            } else {
                stack.pop();
            }
        }
    }

    if(stack.empty()){
        return 1;
    }
    return 0;
}

int main(){
    string parentheses = "((())())";
    if(validParentheses(parentheses) == 1) {
        cout<<"void parentheses: True"<<endl;
    } else {
        cout << "void parentheses: False"<<endl;
    }
}
