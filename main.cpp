#include <iostream>
#include "Book.h"
#include "Books.h"
using namespace std;

int main()
{
    Books b;
    b.readFile();
    b.display();
    system("pause");
    b.add();
    b.display();
    return 0;
}
