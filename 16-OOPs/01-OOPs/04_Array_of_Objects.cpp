#include<iostream>
#include<string>
using namespace std;
class Player{ // class is a blueprint
   private : // jo variable hote h unko private rakho
   int score ;
   int health;
   int age ;

   public :
   
   void setScore(int s){
    score = s;
   }
   void setHealth(int health){
        this->health = health; // this is used to refer the current scope
   }
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};
int main(){
    Player harsh;
    Player raghav;
    Player *urvi;
    harsh.setScore(100);
    raghav.setScore(120);
    Player player[3]= {harsh , raghav , *urvi}; //  this is an array of objects
    cout<<player[0].getScore();
}

