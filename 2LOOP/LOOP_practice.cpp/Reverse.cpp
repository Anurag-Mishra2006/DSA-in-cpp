#include<iostream>
using namespace std;
int main(){
    int n,r=0;
    cin>>n;
    cout<< "reverse\t";
    while(n>0){
        r=n%10;
        n=n/10;
        
        cout<<r<<endl;
    }
    // if(n==0){cout<<0;}
    //MERA me ek drawback h mere me 0 yadi kisi number me huaa to last me ek extra zero laga dega
    // Mere me storage ka problem h but sir me nahi
     


}