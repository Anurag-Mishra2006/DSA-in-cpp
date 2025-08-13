// 17. Letter Combinations of a Phone Number
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> mapping = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> result = {""};  

        for (char digit : digits) {
            vector<string> temp;
            string letters = mapping[digit - '0'];

            for (string s : result) {
                for (char ch : letters) {
                    temp.push_back(s + ch);  // Add each letter to existing strings
                }
            }

            result = temp;  // Move to next digit
        }

        return result;
    }
};


int main() {
    
    return 0;
}