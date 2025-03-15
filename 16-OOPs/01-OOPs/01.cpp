#include<iostream>
#include<string>
using namespace std;
class Player{ // class is a blueprint
    public: // public is used to access the data from the outside
    /*  THERE ARE THREE TYPE OF ACCESS MODIFIERS : 1.Public--> access anywhere
                                                   2.Private --> access only within class
                                                   3.Protected
    */ 
    int score ;// data member
    int health; 
    void showHealth (){ // member function
        cout<<"Health is : "<<health<<endl;
    }
    private:
    char name[20]; // now this data member is private --> can'nt access from the outside

};

int main(){
    Player harsh; // here harsh is an object
    harsh.score=10;// the dot operator is used to access the properties of the classses
    harsh.health = 100;
    harsh.showHealth();
    cout<<harsh.score<<endl;
    cout<<harsh.health<<endl;

    // cout<<harsh.name<<endl; // this throw the garbage values
    // Player amit;
    // amit.health =200;
    // amit.score =293;
    // cout<<amit.score<<endl;
    // cout<<amit.health<<endl;
    // // cout<<amit.name<<endl;

}