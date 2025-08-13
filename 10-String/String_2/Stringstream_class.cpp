#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    //  We use stringstream when we do not want extra space between the words
    /*
            hello everyone    today my physics mark bataya            gaya 
            helloeveryonetodaymyphysicsmarkbatayagaya
    */
    stringstream ss(str);//stringstream ko naam bhi dete h (here it is ss).
    string temp;

    while(ss>>temp){//ss me se le   input lo
    
        cout<<temp<<endl ;
    }

    
}