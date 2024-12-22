#include <iostream>
using namespace std;
int fibo(int n)
{
    // recursion is based on the recurrence relation / formula

    if (n == 1 || n == 2)
        return 1;
    return fibo(n - 1) + fibo(n - 2); // here fibo call itself twice'
    // firstly fibo(n-1) run completely then fibo(n-2) will runs
    //  And this is true in every steps whenever there is sum of two recursive fuctions
    // Recursive Tree ====> Euler Tour Tree Diagram
}
int main()
{
    //  Time Complexity is O(2^n) --> exponential time complexity
    
    cout << fibo(8);
} 