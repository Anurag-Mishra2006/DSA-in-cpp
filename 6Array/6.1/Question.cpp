//  Given an array of marks of students ,
//  if the marks of any student is less than 35
// print its roll number (roll number here refer to the index of the array)
#include<iostream>
using namespace std;
int main(){
    
    int marks[6];
    for (int i=0;i<6;i++){
        cin>>marks[i];
    }
    for(int i;i<6;i++){
        if(marks[i]<35){cout<<i<<"  ";}
    }

}