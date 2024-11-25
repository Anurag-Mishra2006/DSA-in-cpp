#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return fibo(n - 1) + fibo(n - 2); // here fibo call itself twice'
    // Recursive Tree ===> Euler Tour Tree Diagram
}
int main()
{
    cout << fibo(8);
} 