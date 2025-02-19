#include <iostream>
using namespace std;

void passByValue(int val)
{
    val = 100;

}

void passByReference(int *val)
{
    *val = 100;

}

int main()
{
    int x = 20;
    int y = 200;
    passByValue(x);
    cout<<x<<endl;

    passByReference(&y);
    cout<<y<<endl;
}
