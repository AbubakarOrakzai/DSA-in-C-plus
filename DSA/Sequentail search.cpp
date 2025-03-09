#include<iostream>
using namespace std;

int sequentialSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the value of n (size of the array): " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key (the number you want to search): " << endl;
    cin >> key;
    int result = sequentialSearch(arr, n, key);
    if (result != -1)
    {
        cout << "Key found at index " << result << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }
    return 0;
}

