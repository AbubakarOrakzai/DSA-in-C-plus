#include<iostream>
using namespace std;
void scalar()
{
	int array[2][5]
	{
        {2,3,4,5,30},
        {3,4,3,3,23},
	};
   int productscalar=0;
   for(int i=0; i<2; i++)
   {
   	for(int j=0; j<5; j++)
   	{
   		cout<<array[i][j]<<" ";
   	    cout<<array[i][j]*10<<" ";
	   }
	   cout<<endl;
   }
     cout<<"The array after multiplication it with the scalar number  "<<productscalar<<endl;
     
}
int main()
{
	scalar();
}
