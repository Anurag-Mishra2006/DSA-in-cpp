#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    vector<int>v;
    v.push_back(1);
    v.push_back(4);
    v.emplace_back(2); // emplace_back similar to push_back but more faster than it
    cout<<v[1];
    cout<<endl;

    vector<pair<int , int>> vec;
    vec.push_back({1,3});
    vec.emplace_back(1,3);// we doesn't need to use {} 

    vector<int>v2(5,100); // creating five element and each element contains 100
    
    vector<int>v3(v2); // coping v2 in v3 and have similar refrence
    cout<<v3[0]<<endl; 

    for(vector<int>::iterator it = v.begin() ; it !=v.end(); it++){ // iterator
        cout<<*(it)<<" "; // value at the address of it pointer
    }


    cout<<endl;
    vector<int>::iterator it = v.begin();
    cout<<"iterator  ";
    it++;
    cout<<*(it)<<" ";

    // vector<int>::iterator it = v.end(); // the end pointer point somewhere after the last element of the vector list
    // vector<int>:: iterator it = v.rend(); // reverse end
    // vector<int>::iterator it = v.rbegin(); // reverse begin
    
    cout<<endl;
    cout<<v[1]<<" "<<v.at(1);
    cout<<endl;
    cout<<"element at last " ;
    cout<<v.back()<<" "<<endl; // element present at the end of the vector element

    cout<<endl;
    for(auto it = v.begin();it != v.end();it++){ // auto assign the type of data type automatically
    //  that why we not define the vector datatype
    // short way for iterating through the vector
        cout<< *(it)<<" ";
    }

    cout<<endl;
    //  for each loop
    for(auto it : v){
        cout<<it << " ";
    }


    
    cout<<endl;
    cout<<"erasing the elements from the vector"<< endl;
    v.erase(v.begin()+1); // this is going to delete the element present on the given address
    for(auto it : v){
        cout<<it << " ";
    }

    //  after this , 4 remove from the vector 
    cout<<endl;
    // we can also erase the elements in range
    v.erase(v.begin() , v.begin()+1); // the upper limit is not included
    for(auto it : v){
        cout<<it << " ";
    }


//  INSERT FUNCTION 
    cout<<"Insert function \n";
    vector <int> arr(2,100); // {100,100}
    arr.insert(arr.begin() , 300); // {300,100,100}
    // for(int i:arr){
    //     cout<<i<<endl;
    // }

    arr.insert(arr.begin()+1 , 2, 50); // {300 , 50 ,50,100,100}
    for(int i:arr){
        cout<<i<<" ";
    }

    cout<<"\ninserting one vector to another"<<endl;
    vector<int>copy {2,23};
    // inserting the entire vector
    arr.insert(arr.begin() +1,copy.begin(), copy.end()); // 300 2 23 50 50 100 100
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    arr.size(); // tell the size of vector
    arr.pop_back(); // remove the last element of the vector

    arr.swap(v); // swap two vector 
    // cout<<arr[0];

    arr.clear(); // erase the entire vector

    cout<<v.empty();


}
int main(){
    explainVector();
}