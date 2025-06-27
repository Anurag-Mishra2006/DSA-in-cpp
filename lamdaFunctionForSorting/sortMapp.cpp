#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        // mpp, and use lamba function for direct sorting according to their occurance

        unordered_map<string, int>mpp;
        
        for(auto s : words){
            mpp[s]++;
        }

        // dupliWords means all uniqueWords of mpp
        vector<string>uniqueWords;
        for(auto it : mpp){
            uniqueWords.push_back(it.first);

        }
        sort(uniqueWords.begin(), uniqueWords.end(), [&](string a, string b){// lamba function for sorting

            // if freq[a] != freq[b] --> return whose freq is greater
            if(mpp[a] != mpp[b])return mpp[a] > mpp[b];

            // if freq[a] == freq[b] --> return in alphabetical order 
            return a < b;
        });

         
        vector<string>answer;
        for(int i = 0;  i < k; i++){
            answer.push_back(uniqueWords[i]);
        }
        return answer;



    }
};

int main() {
    
    return 0;
}