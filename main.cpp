#include <iostream>
#include "Book.h"
using namespace std;

int main()
{
    Book b;
    b.input();
    b.display();
    cout<<endl;
    b.edit();
    b.display();

    return 0;
}
