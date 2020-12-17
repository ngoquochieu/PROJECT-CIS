#ifndef BOOK_H
#define BOOK_H
#include<string>
using namespace std;
/*
- bookCode: int
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
        Book(int bookCode, string name, string author, string NXB, string cate);
        virtual ~Book();

    protected:

    private:
        // 001, AAA, AAA, AAA, A
        int bookCode;
        string nameBook, author, NXB, categoryCode;

    public:
        bool input(); // Nhập thông tin của sách
        bool edit();  // Chỉnh sửa thông tin của sách
        void display();
        int getBookCode();
        void setBookCode(int code);
        string getNameBook();
        void setNameBook(string nameBook);
        string getAuthor();
        void setAuthor(string author);
        string getNXB();
        void setNXB(string NXB);
        string getCategoryCode();
        void setCategoryCode(string categoryCode);
};

#endif // BOOK_H
