#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the size: " ;
    cin>> size;

    cout<< "The size is: " << size << endl;

    //Dynamically allocate an array of integers of user - specified size.
    // new int [size]  allocates an array of size integers and returns a pointer to first element.
    int* intArray = new int[size];

    cout<< "Enter " <<size<<" integer value: "<< endl;
    for(int i= 0; i<size; i++)
    {
        cin>>intArray[i];
    }
    cout<<endl;


    //Display the values of the array
    cout<<"The array elements are: ";
    for(int i=0; i<size; i++)
    {
        cout<<intArray[i]<< ", ";
    }
    cout<<endl;

     // De-allocate the memory allocated for the array.
    // Use "delete []" because memory was allocated for an array.

    delete [] intArray;


    return 0;
}
