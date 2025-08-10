#include<iostream>
using namespace std;
void calculatesum(){
    int array[2][4]
    {
        {1,2,3,4},
        {5,6,7,8},
    };
    int sum=0;
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<4; j++)
            {
                sum+=array[i][j];
                 cout<<array[i][j]<<" ";
            }
           cout<<endl;
        }
        cout<<"This is the sum of the 2D array"<<endl;
        cout<<sum;
    }

int main()
{
   calculatesum();
}
