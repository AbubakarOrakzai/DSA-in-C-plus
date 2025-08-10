#include<iostream>
using namespace std;
int main()
{
	int Array[3][4]={
	             {2,3,4,5},
				 {4,5,6,7},
				 {3,4,5,6},
				 };
	  for(int i=0; i<3; i++)
	  {
	  	for(int j=0; j<4;j++)
	  	{
	  		cout<<Array[i][j]<<" ";
		  }
	cout<<endl;
	  }
}
