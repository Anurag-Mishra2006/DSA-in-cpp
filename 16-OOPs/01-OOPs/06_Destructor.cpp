// destructor 
//used for destruction
// Destructor  is for destroying the objects
//  when object goes out of scope
#include<iostream>
using namespace std;

class Bike {
    public: 
    int tyreSize;
    int engineSize;
    Bike(int typeSize , int engineSize){
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
    }

    ~Bike(){// Destructor
        cout<<"Destructor called...\n";
    }
};

int main(){
    Bike tvs (12,200);
    Bike honda(13  , 150);
}