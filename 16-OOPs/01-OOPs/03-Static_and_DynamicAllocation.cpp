// all the  previous studied type of data is stored in the RAM as STATIC ALLOCATION
// In static allocation there will be loss of spaces and storages
//  In static allocation we can not add element during the running time of code/program
//  All the static datatype is stored in stack 
#include<iostream>
#include<string>
using namespace std;

class Gun{
    public :  
    int ammo;
    int damage;
    int scope;
};
class Player{ // class is a blueprint
   private :  
    class Helmet{
    int hp ;
    int level;
    public : 
    // setter
    void setHp(int hp){
        this->hp = hp;
    }
    void setLevel(int level){
        this->level = level;
    }

    // getter
    int getHp(){
        return hp;
    }
    int getLevel(){
        return level;
    }
};
   int score ;
   int health;
   int age ;
   bool alive;
   Gun gun; // We can access the object of the one class into another
   // we can also create the another class in the class
   Helmet hemet;
   class Helmet{
    int hp ;
    int level;
    public : 
    // setter
    void setHp(int hp){
        this->hp = hp;
    }
    void setLevel(int level){
        this->level = level;
    }

    // getter
    int getHp(){
        return hp;
    }
    int getLevel(){
        return level;
    }
};


   public :
   // setter 
   void setScore(int s){
    score = s;
   }
   void setHealth(int health){
        this->health = health; // this is used to refer the current scope
   }
    // getter
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    } 

    // now here we set the getter and setter for the gun
    Gun getGun(){
        return gun;
    }
    // now setter is here
    void setGun(Gun gun){
        this->gun = gun;
    }
    
    void setHelmet(int level){
        Helmet *helmet = new Helmet;// dynamic 
        helmet -> setLevel(level);
        int health=0 ;
        if(level ==1)health=25;
        else if(level ==2)health=50;
        else if(level ==3)health=100;
        else cout<<"ERROR , invalid level";
        helmet->setHp(health);
    }
};
int main(){
    Player harsh;// object creation , statically
    Player raghav;// object time , static allocation
    Player *urvi = new Player; // run time , dynamic allocation 
    // Player urviObj = *urvi; 
    harsh.setScore(100); 
    raghav.setScore(120); 
    // cout<<harsh.getHealth();
    // * -->  value at the address
    // (*urvi).setScore(205);

    // cout<<(*urvi).getScore();
    // instead of * operator we use -> (pointer) operator
    urvi->setScore(265);
    cout<<urvi->getScore();
    // Gun akm;
    // akm.ammo(100);
    // akm.damage(205);
    // akm.scope(2);
    // harsh.setGun(akm);
    harsh.setHelmet(2);
    raghav.setHelmet(3);

    Gun gun123 = harsh.getGun();
    cout<<gun123.damage<<endl;

}
