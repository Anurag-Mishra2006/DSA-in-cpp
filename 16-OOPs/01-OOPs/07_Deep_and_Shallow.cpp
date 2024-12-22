//  DEEP AND SHOLLOW
// by default shollow copying occurs 
/* TYPES OF CONSTRUCTOR 
    1. non-parameterised constructor/default
    2. parameterised constructor
    3.copy constructor
    
*/

#include<iostream>
using namespace std;

class Hero{
    // properties
    private :
    int health;
    char level;
    // constructor
    
   
    public:
    // Hero(){
    //     cout<<"Default/simple constructor called"<<endl;
    // }
    // Parameterised constructor
    // Hero(int health){
    //     cout<<"this -> "<<this <<endl;
    //     this->health = health;
    //     // cout<<"constructor called"<<endl;
    // }

    Hero(int health,char level){
        cout<<"this -> "<<this <<endl;
        this->health = health;
        this->level = level;
        cout<<"Level ->"<<level<<endl;
        // cout<<"constructor called"<<endl;
    }

    // COPY CONSTRUCTOR
    Hero(Hero & temp){
        cout<<"copy constrcutor is called...";
        cout<<endl;
        this->health= temp.health;
        this ->level = temp.level;
    }
    int setHealth(int h ){
        health = h;
    }
    int getHealth(){
        return health;
    }
};

int main(){
   Hero suresh(70,'C');
//    COPY CONSTRUCTOR
   Hero R(suresh); // this R copy the hero constuctor suresh

   cout<<R.getHealth()<<endl;
}