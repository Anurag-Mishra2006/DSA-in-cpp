/*  Reverse ----->
  ans=0;
  ans=digit*10^0+ans
  ans=digit*10^1+ans
  ........
*/

/*
********ACTUAL ---->
ans=0;
ans=(ans*10)+digit
*/



// Decimal to Binary Number System.
// 2--> 10
// 5-->101
// 10-->1010
// 8-->1000 
//  ******CONVERSION TO BINARY
/*
LOGIC-1
let n=10;
Step-1: Divide (/) the number by 2
Step-2: Store the remainder
Repeat the above two step until n!=0';
and jo stored remainder h usko reverse kar do 

*/


/*
LOGIC-2
If we take & with 1 and if it give 1--->Odd num , else --->Even
 ans=0;
 while(n!=0){
 bit=n&1;
 ans=bit*10+ans
 n=n>>1;//Right shift with 1
 }
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    float ans=0;//If we replace float with int it give error for five
    int i=0;
    while(n!=0){
        int bit=n&1;
        ans=(bit* pow(10,i))+ans;
        n=n>>1; 
        i++;

    }
    cout<<"Answer :"<<ans;
}
