//  22. Generate Paranthesis: 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void backtrack(int open, int close, string s, vector<string>& ans, int n) {
        if (s.size() == 2 * n) {
            ans.push_back(s);
            return;
        }

        if (open < n) {
            backtrack(open + 1, close, s + '(', ans, n);
        }

        if (close < open) {
            backtrack(open, close + 1, s + ')', ans, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtrack(0, 0, "", ans, n);
        return ans;
    }
};


int main() {
    
    return 0;
}