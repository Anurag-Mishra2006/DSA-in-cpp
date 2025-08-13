// usually used in dynamic graphs:
// main functionality : findParent() and Union()
//  we can do union according to rank and size;

// union by rank : required : a rank array(having all element == 0) , and a parent array(having index)

// Union(u,v) --> find ultimate parent of u & v: pu, pv
            // --> find rank of pu and pv
            // --> converts smaller rank to larger rank always


// Disjoined Set works with time complexity of (4a) --> a == alpha whose value is nearly equal to 1
// i.e union and findparent works in time complexity of (4a)

// Path compression: 
/*
    findPath(u){
    if(u == parent[u])return u;

    return findPath(parent[u]);
    }
 */
#include <bits/stdc++.h>
using namespace std;

class DisjointSet{
    private: 
    vector<int>rank,parent,size;
    public:
        DisjointSet(int n){
            rank.resize(n+1, 0);
            parent.resize(n+1);
            size.resize(n+1,1);

            for(int i =0; i < n+1; i++)parent[i] = i;

        }
        int findParent(int node){
            if(node== parent[node])return node;
            return parent[node] = findParent(parent[node]);

        }
        void unionByRank(int u, int v){
            int ultimateP_u = findParent(u);
            int ultimateP_v = findParent(v);
            if(ultimateP_u == ultimateP_v)return ; // already in the same set

            if(rank[ultimateP_u] < rank[ultimateP_v]){
                parent[ultimateP_u] = ultimateP_v; // attach u under v
            }
            else if(rank[ultimateP_u] > rank[ultimateP_v]){
                parent[ultimateP_v] = ultimateP_u;//attach v under u
            }
            else {
                // if rank of both the ultimate parent are equal then do this
                parent[ultimateP_v] = ultimateP_u;
                rank[ultimateP_u]++; // incease rank since height incresed

            } 
        }
        void unionBySize(int u, int v){
            int ultimateP_u = findParent(u);
            int ultimateP_v = findParent(v);
            if(ultimateP_u == ultimateP_v)return ;

            if(size[ultimateP_u] < size[ultimateP_v]){
                parent[ultimateP_u] = ultimateP_v;
                size[ultimateP_v] += size[ultimateP_u];
            }
            else {
                // if size of both the ultimate parent are equal then do this
                parent[ultimateP_v] = ultimateP_u;
                size[ultimateP_u]+= size[ultimateP_v];
            } 

        }
        
};

// / Union by Size;
 
int main() {
    
    DisjointSet ds(7);
    ds.unionByRank(1,2);
    ds.unionByRank(2,3);
    ds.unionByRank(4,5);
    ds.unionByRank(6,7);
    ds.unionByRank(5,6);
    // if 3 and 7 same or not
    if(ds.findParent(3) == ds.findParent(7))cout<<"Same\n";
    else cout<<"Not same\n";
    ds.unionByRank(3,7);
    if(ds.findParent(3) == ds.findParent(7))cout<<"Same\n";
    else cout<<"Not same\n";
    
    return 0;
}