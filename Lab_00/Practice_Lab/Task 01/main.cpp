#include <iostream>
#include "Conversion.h"
#inlcude <string>
// #include "Conversion.cpp"

using namespace std;

int main()
{
    double height, weight;
    // taking user input
    cout<< "Enter your height in cm: ";
    cin>> height;

    cout<<"Enter your weight in kg: ";
    cin>> weight;

    // Creating an object of conversion class
    Conversion convert(height, weight);

    //display the converted values
    convert.display();

    return 0;
}
