/*int main(){
   
 }
 1.sabse pahle yahi chalta hai
 2.Ye ek hi baar chalta h*/


//  ***********INBUILD FUNCTION***
// 1.min()
//2.max()
//3.sqrt(7)
#include<iostream>
#include<cmath>
using namespace std;
int mini(int x,int y){
    int a;
    if (x<y) a=x;
    else a=y;
    return a;
}
int main(){
    int x1,y1;
    cin>>x1>>y1;
    cout<<mini(x1,y1)<<endl;
    cout<<sqrt(9);
}