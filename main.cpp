#include <iostream>
#include "Book.h"
#include "Books.h"
using namespace std;

int main()
{
    Books b;
    b.readFile();
    b.display();

    return 0;
}
