#include <bits/stdc++.h>
using namespace std;
//  finding the x power n
// int main() {
//     int t;
//     cout<<"Enter the number of Test Case: "<<endl;
//     cin>>t;
//     while(t--){
//         int n;
//         double x;
//         cout<<"Enter x and n resp: "<<endl;
//         cin>>x>>n;

//         vector<double>preCompute(abs(n)+1,x);
//         preCompute[0] = 1;
//         for(int i = 1; i <= n; i++)preCompute[i] = preCompute[i - 1] * x;
//         cout<<"X power N: "<<preCompute[n]<<endl;

//     } 
//     return 0;
// }

// // faster using O(log N):
#include <bits/stdc++.h>
using namespace std;

double fastPower(double x, int n) {
    double result = 1.0;
    long long exp = n;  // Use long long to handle INT_MIN safely
    if (exp < 0) {
        x = 1.0 / x;
        exp = -exp;
    }

    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= x;  // If odd, multiply result
        }
        x *= x;          // Square the base
        exp /= 2;        // Halve the exponent
    }

    return result;
}

int main() {
    int t;
    cout << "Enter the number of Test Case: " << endl;
    cin >> t;

    while (t--) {
        double x;
        int n;
        cout << "Enter x and n resp: " << endl;
        cin >> x >> n;

        double ans = fastPower(x, n);
        cout << "X power N: " << fixed << setprecision(10) << ans << endl;
    }

    return 0;
}
