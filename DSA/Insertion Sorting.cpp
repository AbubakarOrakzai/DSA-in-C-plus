//Insertion Sorting
#include<iostream>
using namespace std;
void InsertionSorting(int Arr[],int n)
{
	for(int i=1; i<n; i++)
	{
		int current=Arr[i];
		int previous=i-1;
		while(previous>=0 && Arr[previous]>current)
		{
			Arr[previous+1]=Arr[previous];
			previous--;
		}
		Arr[previous+1]=current;
	}
	}
int main()
{
	int n=5;
	int Arr[]={4,1,5,2,3};
	InsertionSorting(Arr,n);
	cout<<"Element After Insertion Sorting "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<Arr[i]<<", ";
	}
}
