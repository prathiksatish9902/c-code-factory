#include <iostream>
using namespace std;

void shiftDuplicatesToEnd(int arr[], int n) {
    int uniqueIndex = 0;

    // Traverse array and move unique elements to the front
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        // Check if arr[i] has appeared before
        for (int j = 0; j < uniqueIndex; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If not duplicate, place it in the next unique position
        if (!isDuplicate) {
            arr[uniqueIndex++] = arr[i];
        }
    }

    // Fill remaining places with duplicates
    for (int i = 0; i < n; i++) {
        for (int j = uniqueIndex; j < n; j++) {
            if (arr[j] == arr[i]) {
                swap(arr[j], arr[uniqueIndex++]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    shiftDuplicatesToEnd(arr, n);

    cout << "Array after shifting duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
