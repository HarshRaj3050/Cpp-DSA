#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Stack{
    public:
    
    int duplicate(vector<string> st){
        stack<string> stack;
        for(int i=0; i<st.size(); i++){
            if(stack.empty()){
                stack.push(st[i]);
            } else if(st[i] == stack.top()){
                stack.pop();
            } else {
                stack.push(st[i]);
            }
        }

        return stack.size();
    }
};

int main(){
    Stack objSt;
    vector<string> st = {"ab","ac","da", "da","ac","db", "ea"};
    cout<<"Number of string: "<<objSt.duplicate(st)<<endl;

    
}