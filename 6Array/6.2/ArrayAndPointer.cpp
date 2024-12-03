// Char arr[3]={ 'a','e','@'};
// Char array is also allowed
// yadi ham kisi piointer  ko array ka addrss de de(uske pahle elemnt ka) to uske pass puri chamta h puri array ko excess karne ka 
#include<iostream>
using namespace std;
int main(){
    int arr[]={4,3,9,2,5,8};
    int *ptr=arr; //Giving address
    //  through the pointer we can modified the original one 

    ptr[0]=8;
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";

    }
    cout<<endl;
   
    *ptr=8;// ptr[0]=8;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
        
    }
}
  
