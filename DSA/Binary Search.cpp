//Name : Abubakar Orakzai
//SID :  S2024266007
//Find 22 int this Array using binary search 
#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target) {
    if (low > high) 
        return -1;  
    
    int mid = (low + high) / 2;
    
    if (arr[mid] == target) 
        return mid;  
    
    if (arr[mid] > target) 
        return binarySearch(arr, low, mid - 1, target);  
    
    return binarySearch(arr, mid + 1, high, target);  
}

int main() {
    int arr[] = {11, 22, 33, 44, 55};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 22;
    
    int result = binarySearch(arr, 0, size - 1, target);
    
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;
}

