#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<n<<" is composite number"<<endl;
            break;
        }
        else{
            cout<<n<< " is prime"<<endl;
            break;
        }
    }
}