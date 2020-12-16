#ifndef BOOK_H
#define BOOK_H
#include<string>
using namespace std;
/*
- bookCode: string
- nameBook: string
- author: string
- publisher: string
- categoryCode: string
+ input(): bool
+ edit(): bool
+ display(): void
*/

class Book
{
    public:
        Book();
        virtual ~Book();

    protected:

    private:
        // 001, AAA, AAA, AAA, A
        string bookCode, nameBook, author, publisher, categoryCode;

    public:
        bool input(); // Nhập thông tin của sách
        bool edit();  // Chỉnh sửa thông tin của sách
        void display();
};

#endif // BOOK_H
