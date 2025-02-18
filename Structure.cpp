#include<iostream>
#include<cstring>
using namespace std;

struct Books
{
    char name[50];
    char author[50];
    int id;
};
int main()
{
    struct Books book1;

   // book1.name = "C++ Books"
    //book1.author = "Amanullah Shah"
    strcpy(book1.name, "C++ Books");
    strcpy(book1.author, "Amanullah Shah");
    book1.id =  1001;

    cout<<"Books 1 Name:  "<<book1.name<<endl;
    cout<<"Books 1 Author:  "<<book1.author<<endl;
    cout<<"Books 1 ID:  "<<book1.id<<endl;


}
