#include<iostream>
using namespace std;
int main()
{
	int n=6;
	int array[6]={10,8,2,3,1,4};
	for(int i=0; i<n-1; i++)
	{
		int index=i;
		for(int j=i+1; j<n; j++)
		{
			if(array[j]<array[index])
			index=j;
		}
		swap(array[index],array[i]);
		cout<<"Array after pass "<<i+1<<" : ";  
		for(int i=0; i<n; i++)
		{
			cout<<array[i]<<",";
		}
		cout<<endl;
	}
}
