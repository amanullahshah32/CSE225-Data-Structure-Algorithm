#include <iostream>
using namespace std;

int main()
{
    // what is a pointer?
    // A pointer is a variable whose value is the address of another variable.

    int var = 0;
    cout<<&var<<endl;


    int *intP;
    intP = &var;

    cout<<intP<<endl;
    // access the value of the variable
    cout<<*intP<<endl;

    var = 20;
    cout<<intP<<endl;
    // access the value of the variable
    cout<<*intP<<endl;
    return 0;
}
