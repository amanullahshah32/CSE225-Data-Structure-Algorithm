#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout<< "Enter the number of rows: ";
    cin>> rows;

    // allocate an array of int pointers (each will point to a row of integers)
    int** intJaggedArray = new int* [rows];

    // create an array to hold the number of columns for each row.
    int* colsPerRow = new int[rows];

    // For each row, get the number of columns and allocate that row.
    for (int i = 0; i< rows; i++)
    {
        cout<<"Enter the number of elements for row "<< i+1 << ": ";
        cin>> colsPerRow[i];

        // allocate the row with the specified number of columns
        intJaggedArray[i] = new int [colsPerRow[i]];
    }

    // Input: Fill each row with user input.
    for(int i= 0; i< rows; i++)
    {
        cout<<"Enter "<< colsPerRow[i]<< " integers for row"<< i + 1 << " :";

        for(int j=0; j<colsPerRow[i]; j++)
        {
            cin>>intJaggedArray[i][j];

        }
    }

    // output: print the jagged array
    cout<<"The jagged array is: "<<endl;
    for(int i = 0 ; i<rows; i++)
    {
        for(int j=0; j<colsPerRow[i]; j++)
        {
            cout<<intJaggedArray[i][j]<< " , ";
        }
        cout<<endl;
    }

    //De-allocation
    // First, deallocate each row
    for(int i = 0; i<rows; i++)
    {
        delete [ ] intJaggedArray[i];
    }

    // Then deallocate the array of pointers.
    delete [] intJaggedArray;

    // Deallocate the array that holds the number of columns for each row.
    delete [] colsPerRow;

    return 0;
}
