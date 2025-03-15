#include<bits/stdc++.h>
using namespace std;

//  PAIRS
void explainPair(){
    pair<int , int> p = {1, 3}; // it contains {1,3} in one container variable p
    cout<<"first element of p"<<p.first<<"  "<<" second element of p"<<p.second<<endl;

    pair<int , pair<int , int>> p1 = {3,{4,6}}; // pair can contains another pair also
    cout<<p1.first<<" " << p1.second.first<<" "<< p1.second.second<<endl;

    pair<int , int>arr[] = {{1,2} ,{3,5},{5,8}}; // array of pairs
    cout<<arr[1].second;

}

int main(){
    explainPair();
}

