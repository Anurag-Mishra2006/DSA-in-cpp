#include<iostream>
using namespace std;
void hanoi(int n, char s,char h,char d){
    if(n==0)return  ;
    hanoi(n-1,s,d,h); // for n-1 helper now change to destination and destination to helper
    cout<<s<<" -> "<<d<<endl;
    hanoi(n-1,h,s,d); // here also the original source become helper and helper become source

}
int main(){
    //  No of moves is (2^n-1) 
    //1. n-1 disk ko source se helper pe aao--> recursion
    //2. Biggest disk ko source ko destination pe aao
    //3. n-1 disks ko helper se destination tak lao -- Recurrsion
    int n =5;
    hanoi(n,'A','B','C');
}
/** OUTPUT for n=5;
 * A -> C
A -> B
C -> B
A -> C
B -> A
B -> C
A -> C
A -> B
C -> B
C -> A
B -> A
C -> B
A -> C
A -> B
C -> B
A -> C
B -> A
B -> C
A -> C
B -> A
C -> B
C -> A
B -> A
B -> C
A -> C
A -> B
C -> B
A -> C
B -> A
B -> C
A -> C
 */