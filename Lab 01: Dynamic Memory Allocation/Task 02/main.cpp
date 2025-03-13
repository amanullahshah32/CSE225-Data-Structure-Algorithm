#include <iostream>

using namespace std;

int main()
{
    int rows, cols;
    cout<< "Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns (Lenth of each string): ";
    cin>>cols;

    // Dynamically allocate a 2D character array.
    // First, allocate an array of char pointers (one for each row).

    // for row, allocate an array of characters (size: cols + 1 for null terminator)
    char ** charArray = new char* [rows];

    for (int i = 0; i<rows; i++)
    {
        charArray[i] = new char[cols + 1]; // +1 for the null character '\0'
    }

    //input: Read each string from the user:
    cout<< "Enter "<< rows << " String (each upto ) "<< cols<< " character: "<<endl;
    for(int i = 0; i<rows; i++)
    {
        cin>>charArray[i]; //reads a string into character [i]

    }

    // Display: Print each string
    cout<< "The entered strings are: "<< endl;
    for (int i= 0; i<rows; i++)
    {
        cout<<charArray[i]<<endl;
    }

    // De- allocation: First, delete each row.
    for(int i=0; i<rows; i++)
    {
        delete [] charArray[i];
    }

    // delete the array of pointers
    delete [] charArray;
    return 0;
}
