#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    // Define the array
    int arr[m][n];

    // Taking input
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Initialize max and second max
    int max = INT32_MIN;
    int secmax = INT32_MIN;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] > max) {
                secmax = max; // Update second max
                max = arr[i][j]; // Update max
            } else if (arr[i][j] > secmax && arr[i][j] < max) {
                secmax = arr[i][j]; // Update second max
                
            }
        }
    }

    // Check if second max was updated
    if (secmax == INT32_MIN) {
        cout << "There is no second maximum value." << endl;
    } else {
        cout << "The second maximum value is: " << secmax << endl;
    }

    return 0;
}
