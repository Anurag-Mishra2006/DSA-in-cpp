#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string binary = ""; // String to hold the binary representation

    if (n == 0) {
        binary = "0"; // Special case for zero
    } else {
        while (n != 0) {
            int bit = n & 1; // Get the least significant bit
            binary = to_string(bit) + binary; // Prepend the bit to the string
            n = n >> 1; // Right shift to process the next bit
        }
    }

    cout << "Answer: " << binary;
    return 0;
}
