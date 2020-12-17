#ifndef BOOKS_H
#define BOOKS_H
#include "Book.h"
using namespace std;
#include<vector>
/*
- books: vector<Book>
+ add(): bool
+ deleteBook(): bool
<overide> + edit(): bool
<overide> + display(): void
+ readFile(): void
+ writeFile(): void
*/
class Books:public Book
{
    public:
        Books();
        virtual ~Books();
        bool add();         // Them 1 quyen sach
        bool deleteBook();      // Xoa 1 quyen sach
        bool edit();        // Chinh sua sach
        void display();
        void readFile();
        void writeFile();

    protected:

    private:
        vector<Book> books;
 //       int id;
};

#endif // BOOKS_H
