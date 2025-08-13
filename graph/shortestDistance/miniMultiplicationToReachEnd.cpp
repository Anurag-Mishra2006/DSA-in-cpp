#include <bits/stdc++.h>
using namespace std;
// given : start,end and an array arr of n numbers. At each step, start is multiplied with any number in the array and tehn mod operation with 100000 is done to get new start

// Your task is to find the minimum steps inwhich end can be achieved starting from start. If it is not possible to reach end , then return -1
// we can use dijkstra's algo
// all the possible end present b/w 0 to 9999

// whenever reached the end return the step
class Solution
{
private:
    /* data */
    int modulo = 1e5;
public:
    int minimumMultiplications(vector<int>&arr,
        int start, int end){
            queue<pair<int,int>>q;
            vector<int>distance(1e5,1e9);
            q.push({start,end});
            distance[start] =0;
            
            // O(100000 * N )
            while(!q.empty()){
                int node = q.front().first;
                int steps = q.front().second;
                q.pop();

                for(auto it : arr){
                    int num = (it * node)% modulo;
                    if(steps + 1 < distance[num]){
                        distance[num] = steps + 1;
                        if(num == end)return distance[num];

                        q.push({num,steps+1});
                    }
                }
            }
            return -1;
            
        }
     
};


int main() {
    
    return 0;
}