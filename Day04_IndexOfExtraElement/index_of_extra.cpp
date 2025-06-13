#include <iostream>
using namespace std;

// Function to find the index of the extra element using binary search
int findExtraElement(int arr1[], int arr2[], int n) {
    int extraIndex = n;
    int start = 0, end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        // If elements match, continue search in right half
        if (arr2[mid] == arr1[mid]) {
            start = mid + 1;
        } else {
            // Found mismatch, update extraIndex and continue in left half
            extraIndex = mid;
            end = mid - 1;
        }
    }
    return extraIndex;
}

int main() {
    // Example test case
    int arr1[] = {2, 4, 6, 8, 9, 10, 12};
    int arr2[] = {2, 4, 6, 8, 10, 12};

    int n = sizeof(arr2) / sizeof(arr2[0]); // Size of smaller array
    int extraIndex = findExtraElement(arr1, arr2, n);

    cout << "The extra element is at index " << extraIndex
         << " and the value is " << arr1[extraIndex] << endl;

    return 0;
}
