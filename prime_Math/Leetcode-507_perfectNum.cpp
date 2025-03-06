#include <bits/stdc++.h>
using namespace std;
bool checkPerfectNumber(int num) {
    int sum =0;
    for(int i=1;i*i< num;i++){
        if(num%i==0){
            sum += i;
        }
    }
    for(int i=sqrt(num); i>1; i--){
        if(num%i==0){
            sum += (num/i);
        }
    }
    return sum==num;// 0 for false and 1 for true
}

int main() {
    cout<<checkPerfectNumber(7);
    return 0;
}