// We can also make char array
// char arr[3]={'@','#','&'}
#include<iostream>
using namespace std;
int main(){
    int arr[]={4,3,5,6};
    int* ptr=arr;//This give the address of the pointer
    cout<<ptr<<endl;  
    cout<<&ptr[0]<<endl;
    // One way of printing the array
    for(int i=0;i<=3;i++){
        // cout<<arr[i]<<endl;
        cout<<ptr[i]<<"  "; //this is of pointer
    }
    cout<<endl;
    *ptr=8;//isse hamere pass first element ka hi excess h i.e ptr[0]=8
    ptr++;//ptr is pointing to 2nd element
    *ptr=9;
    ptr--;//ptr is pointing to 1st element 
    for(int i=0;i<=3;i++){//pura ka pura array print ho raha h 
        cout<<ptr[i]<<"  ";
    }
    ptr=arr;//ptr is pointing  to 1st element 
     //isse wapas se ptr ki intial value aa jayegi
    cout<<endl;
    // Another way of printing array
    for(int i=0;i<=3;i++){
        cout<<*ptr<<"  ";
        ptr++;//Ae karne se address of pointer shift to the lenght of the datatype(i.e here int)
    }




}