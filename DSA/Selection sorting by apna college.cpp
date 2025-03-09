#include<iostream>
using namespace std;
void SelectionSort(int Arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int SI=i;
        for(int j=i+1; j<n; j++)
        {
         if(Arr[j]<Arr[SI])
         {
             SI=j;
         }
         swap(Arr[i],Arr[SI]);
        }
    }
}
int main()
{
    int n=5;
    int Arr[]={2,7,4,6,4,6};
    SelectionSort(Arr, n);
    cout<<"The Element of the Array after Selection sort "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<Arr[i]<<" , ";
    }
}
