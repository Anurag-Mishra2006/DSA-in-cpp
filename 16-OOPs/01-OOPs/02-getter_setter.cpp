#include<iostream>
#include<string>
using namespace std;
class Player{ // class is a blueprint
   private : // jo variable hote h unko private rakho
   int score ;
   int health;
   int age ;
   bool alive;

   public :
   // setter 
   void setScore(int s){
    score = s;
   }
   void setHealth(int health){
        this->health = health; // this is used to refer the current scope
   }
//   this is a pointer pointing the current context
//    WHEN USE this _____ when the name of variable and the parameter are same 
   bool isAlive(){
    return  alive;
   }
    // getter
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};
int addScore(Player a , Player b){ // here we can give class as parameter

    return a.getScore() + b.getScore();
}

int main(){
    Player harsh;
    Player raghav;
    harsh.setScore(100);
    raghav.setScore(120);
    // cout<<harsh.getHealth();
    cout<<addScore(harsh , raghav);
}

