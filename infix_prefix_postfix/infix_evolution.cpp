//  infix expression --> human readable and solveable
#include <bits/stdc++.h>
using namespace std;

int priority(char ch) {
    if (ch == '+' || ch == '-') return 1;
    if (ch == '*' || ch == '/') return 2;
    return 0;
}

int solve(int val1 , int val2,char ch){
    if(ch == '+')return val1+val2;
    else if(ch == '-')return val1-val2;
    else if(ch == '*')return val1*val2;
    else return val1/val2;
     
}
int main() {
    string s = "7+9*4/8-3";// infix expression
    // we need 2 stack --> one for val and open for operator char

    // RULES:  
        //  1. if s[i] is  a digit then push into val
        //  2. if s[i] is operator char + - * /
                // a. if operator stack is empty then push
                // b. if perority of st.top() < pr(s[i]);
                            //  then also push
                //  c. while perority of st.top() >= pr(s[i]) --> usme tab hame solve karna hoga
                            //  char ch = st.top() = *
                            //  int val2 = 4;
                            //  int val1 = 6;
                            //  int ans  = val1 ch val2; (val operator val2)
                            //  then again push the ans in val stack
                        
        // CODE:
        stack<int>val;
        stack<char>op;
        for(int i =0 ; i<s.length();i++){
            //  check if s[i] is a digit (0-9)
             
            if(s[i] >='0' && s[i]<='9'){
                val.push(s[i]-'0');
            }
            else {// not digit
                if(op.size()==0 || priority(s[i])>priority(op.top())) op.push(s[i]);
                else{
                    //  work , priority(s[i]) <= priority(op.top());
                    while(op.size()>0 && priority(s[i])<=priority(op.top())){
                        //  we have to do val2 op val1
                        char ch = op.top();
                        op.pop();
                        int val2 = val.top();
                        val.pop();
                        int val1 = val.top();
                        val.pop();
                        int ans  = solve(val1, val2,ch);
                        val.push(ans);
                    }
                    op.push(s[i]);
                }
                  
            }
        }
        // the operator stack can have values
        //  so make it empty
        while(op.size()>0){
            //  work
            char ch = op.top();
            op.pop();
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            int ans  = solve(val1, val2,ch);
            val.push(ans);

        }
        cout<<val.top();

}