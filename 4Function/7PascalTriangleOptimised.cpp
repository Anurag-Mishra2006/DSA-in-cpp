// Previous wale quesrtion me  time complexity jayda h
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter n:";
    cin>>n;
    for (int i=0;i<=n;i++){
        int prev=1;
        for(int j=0;j<=i;j++){
            cout<<prev<<" ";
            int curr=prev*(i-j)/(j+1);
            prev=curr;
        }
        cout<<endl;
    }
     
}