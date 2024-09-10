#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0)m=1;
        else m=0;
        for(int j=1;j<=i;j++){
            cout<<m;
            //  Filling 
            if(m==1)m=0;
            else m=1;



            
            }
         cout<<endl;
        }
    
     

    }
 