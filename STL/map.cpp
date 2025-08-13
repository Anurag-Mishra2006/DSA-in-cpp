#include<bits/stdc++.h>
using namespace std;
void explainMap(){
    map<int , int> map1; // first is the datatype of key and second is the datatype of value store in the key

    map<int , pair<int , int>> map2 ;
    map<pair<int , int> , int> map3;

    map1[1] =2;
    map1.emplace(3 , 1);
    map1.insert({2,4});
    map3[{2 ,3}] = 10;

    // storage of elements in map is look like this
    // {
    //     {1,2}
    //     {2,4}
    //     {3,5}

    // }


    


    for(auto it : map1){
        cout<<it.first<<" "<<it.second<<endl;
    }

    // erase , swap , size , empty , are same as above


}

void explainMapinBrief(){
    // the algo befind the sorted map is RED BLACK TREES
    //  store key and value
    // not it contigous fashion
    
     
}

int main(){
    explainMap();
}