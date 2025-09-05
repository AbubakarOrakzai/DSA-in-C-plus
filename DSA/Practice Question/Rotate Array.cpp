#include <iostream>
using namespace std;

void rotateArr(int arr[], int n, int d) {
    for (int i = 0; i < d; i++) {
        int first = arr[0];
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = first;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    rotateArr(arr, n, d);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

