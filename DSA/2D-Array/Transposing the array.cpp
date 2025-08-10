//Transpose the 2D array (Matrix)
/*#include<iostream>
using namespace std;
   void Transpose()
   {
	int array[3][4]={
	                 {2,3,4,5},
					 {6,7,8,9},
					 {10,12,13,14},
					 };
					 cout<<"The Original array are "<<endl;
					 for(int i=0; i<3; i++)
					 {
					 	for(int j=0; j<4; j++)
					 	{
					 		  cout<<array[i][j]<<" ";
						 }
						 cout<<endl;
					 }
					 cout<<"The array after the transpose the array "<<endl;
					 int Transpose[4][3];
					 for(int i=0; i<3; i++)
					 {
					 	for(int j=0; j<4; j++)
					 	{
					 		Transpose[j][i]=array[i][j];
					 	
						 }
					 }
					 
					  cout<<"The array after the transpose the array "<<endl;
					 for(int i=0; i<4; i++)
					 {
					 	for(int j=0; j<3; j++)
					 	{
					 		cout<<Transpose[i][j]<<" ";
						 }
						 cout<<endl;
					 }
					 
				}
					
				

int main()
{
	Transpose();					 }
}*/
#include<iostream>
using namespace std;

void Transpose() {
    int array[3][4] = {
        {2, 3, 4, 5},
        {6, 7, 8, 9},
        {10, 12, 13, 14},
    };

    cout << "The Original array is: " << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose the array (3x4 to 4x3)
    int Transpose[4][3];  // Define a 4x3 array to store the transposed result
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            Transpose[j][i] = array[i][j];
        }
    }

    // Print the transposed array (4x3)
    cout << "The array after transpose is: " << endl;
    for(int i = 0; i < 4; i++) {  // Loop for transposed array (4 rows)
        for(int j = 0; j < 3; j++) {  // Loop for transposed array (3 columns)
            cout << Transpose[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    Transpose();  // Call the Transpose function
    return 0;
}


