#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    stack<char> st;

    for(char c : s){

        if(c=='(' || c=='{' || c=='['){
            st.push(c);
        }

        else if(c==')'){
            if(st.empty() || st.top()!='('){
                cout << false;
                return 0;
            }
            st.pop();
        }

        else if(c=='}'){
            if(st.empty() || st.top()!='{'){
                cout << false;
                return 0;
            }
            st.pop();
        }

        else if(c==']'){
            if(st.empty() || st.top()!='['){
                cout << false;
                return 0;
            }
            st.pop();
        }
    }

    if(st.empty()){
        cout << "true";
    }else{
        cout << "false";
    }
}