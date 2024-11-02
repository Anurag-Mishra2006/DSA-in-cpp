#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int visited[n]; // Array to track visited elements
    int frequency[n]; // Array to store frequency of each element
    for (int i = 0; i < n; i++) {
        visited[i] = 0; // Initialize all elements as not visited
        frequency[i] = 0; // Initialize frequency array
    }

    // Count frequencies of each element
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) continue; // Skip if already counted
        int count = 1; // Initialize count for the current element
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++; // Increment count if a match is found
                visited[j] = 1; // Mark as visited
            }
        }
        
        frequency[i] = count; // Store frequency
        visited[i] = 1; // Mark current element as counted
    }

    // Sort the array based on frequency using a simple bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (frequency[j] < frequency[j + 1]) { // Sort by frequency in descending order
                // Swap frequencies
                int tempFreq = frequency[j];
                frequency[j] = frequency[j + 1];
                frequency[j + 1] = tempFreq;

                // Swap corresponding elements based on the sorted frequencies
                int tempElem = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tempElem;
            }
        }
    }
    // Print the unique elements and their frequencies
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1 && frequency[i] > 0) { // Only print counted elements with non-zero frequency
            printf("%d | %d\n", arr[i], frequency[i]);
            // visited[i] = -1; // Mark as printed
        }
    }

    return 0;
}