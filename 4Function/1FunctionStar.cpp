// Jab ek hi kaam hi chij to use karo fxn
// we always  tend to use same/similar piece of code in the proejct multiple time, but not always we are looking for continueous repition
// int main(){
//  } It is also a funtion

// Function are set of cod which performs something for you
// Function arre used to modularise code
// Function are used to increase readability
// Function are used to use same code mutiple time
// void->Which does not return anything
/*          Void functions are commonly used for tasks that don’t need to return a value 
            but involve side effects (like printing to the console, modifying global variables, or updating data structures).*/
            
 // return  
//parameterised
//non parameterised                      


#include<iostream> 
using namespace std ; 
void starTriangle(int x){
      for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
void greeting()//Braket me jo likhte h use argument kahte h 
// argument  ka kaam ae rahta  h ki jab ham fxn ko call karte samay usme input likjh sakte h 
{
    cout<<"Good morning"<<endl;
}
int main(){  


    greeting ();      //Calling the function 
   starTriangle(3);// x=3
   greeting();
   starTriangle(6);// x=6
 }
 
 