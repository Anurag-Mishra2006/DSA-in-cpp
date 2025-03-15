#include<iostream>
using namespace std;

class Bike {
    public: 
    static int noOfBikes; // now this belong to the class
    int tyreSize;
    int engineSize;
    Bike(int typeSize , int engineSize){
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
    }
     
    static void increaseNoOfBikes (){
        noOfBikes++;
    }

     
};
// void print(){ // static function
//     static int  b = 10;
//     cout<<b<<endl;
//     b++;

// }

//  :: -> scope resolution 
int Bike :: noOfBikes= 10; // this is aloted to all the value of class
int main(){
    Bike tvs (12,200);
    Bike honda(13  , 150);
    Bike bajaj(11,145);
    // print();
    // print();
    // print();

    // tvs.noOfBikes =4;
    cout<<tvs.noOfBikes;
    tvs.increaseNoOfBikes();
    
    cout<<endl;
    cout<<honda.noOfBikes;

}