#include<iostream>
using namespace std;

class Book{
    public :
    char name;
    int price;
    int noOfPages ;
    int countBooks(int prices){
        if(price < prices)return 1;
        else return 0;
    }
    bool isBookPresent(char book){
        if(name == book ){
            return true;
        }
        else return false;
    }
};

int main(){
    Book harryPotter;
    harryPotter.name = 'H';
    harryPotter.noOfPages = 500;
    cout<<harryPotter.name<<endl;
    cout<<harryPotter.isBookPresent('A')<<endl;
    cout<<(harryPotter.countBooks(5016));
}