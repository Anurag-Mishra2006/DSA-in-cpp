#include<iostream>
using namespace  std;
int gcd(int a,int b){
    int hcf=1;

    //for(int i=1;i<=min(a,b);i++)
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            // i is common factor
            hcf=i;
            break; //jab pahle waala code chala tha to usme break use nhi hua tha
            
        }
    }
    return hcf;
}
int main(){
    int a;
    cout<<" enter 1st num: ";
    cin>>a;
    int b;
    cout<<"enter the 2nd num ; ";
    cin>>b;
    cout <<gcd(a,b);

}