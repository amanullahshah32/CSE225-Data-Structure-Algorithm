#include "Conversion.h"
#include<iostream>

using namespace std;

const double CM_TO_INCH = 0.393701;
const double KG_TO_POUND  =  2.20462;

// Constructor
Conversion::Conversion(double height, double weight) {
    height_cm = height;
    weight_kg = weight;
}

// convert height from centimeter to inches
double Conversion::convertHeightToInches()
{
    return height_cm * CM_TO_INCH;
}

double Conversion::convertWeightToPounds()
{
    return weight_kg*KG_TO_POUND;
}

//Display the converted values
void Conversion::display()
{
    cout << "Height in inches: " << convertHeightToInches() << " inches" << endl;
    cout<<"convert weight in pounds: : "<< convertWeightToPounds() << "lbs"<<endl;
}
Conversion::~Conversion()
{
    //dtor
}
