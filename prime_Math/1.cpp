//  prime number has extact two factor 1 and itself

// NOTE: if 'i' is a factor of 'n' then 'n/i' is also a factor
// NOTE : composite number ke even number of factor hote h except perfect squares
// if any number has factors except 1 and n, then for sure half of the factors will lie before the sqrt(n)


#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"enter the number: ";
    int n;
    bool flag = true;
    cin>>n;
    for(int i=2; i * i <=n; i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(flag)cout<<"Prime";
    else cout<<"Not Prime";
    
    return 0;
}