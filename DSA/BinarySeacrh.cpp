#include <iostream>
using namespace std;

int binarySearch(int n, int arr[], int key)
{
    int s = 0;
    int e = n;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of the array "<<endl;
    cin >> n;

    int arr[n];
    cout<<"Enter the element of the array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout<<"Enter the key you want to find "<<endl;
    cin >> key;
    cout<<"The key is at index ";
    cout << binarySearch(n, arr, key) << endl;

    return 0;
}
