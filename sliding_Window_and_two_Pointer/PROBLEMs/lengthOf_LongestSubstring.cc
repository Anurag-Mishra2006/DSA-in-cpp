#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)return 0;
        int maxlen = INT_MIN;
        unordered_set<int>set;
        int l = 0 ;
        for(int r =0 ; r<s.length() ; r++){
            if(set.find(s[r]) != set.end()){
                while(l<r && set.find(s[r]) != set.end()){
                    set.erase(s[l]);
                    l++;

                }
            }
            set.insert(s[r]);
            maxlen = max(maxlen , r-l+1);
        }
        return maxlen;
    }
};

int main() {
    Solution len;
    cout<<len.lengthOfLongestSubstring("pwwkew");

    return 0;
}