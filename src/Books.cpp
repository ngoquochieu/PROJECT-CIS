#include "Books.h"
#include "Book.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
Books::Books()
{
    //ctor
}

Books::~Books()
{
    //dtor
}
bool Books::add()
{

}

bool Books::deleteBook()
{

}

bool Books::edit()
{

}

void Books::display()
{
    for(int i = 0 ; i < books.size(); i ++){
        books[i].display();
    }
}
//Doc du lieu tu file
void Books::readFile()
{
    fstream fs;
    fs.open("D:\\Project-CIS\\QUANLITHUVIEN\\Du_lieu\\du_lieu_books.txt");
    int id ;
    string nameBook, author, NXB, cate;
    while(!fs.eof()){
        fs>>id;
        fs.ignore();
        getline(fs, nameBook);
        getline(fs, author);
        getline(fs, NXB);
        getline(fs, cate);
        Book book(id, nameBook, author, NXB, cate);
        books.push_back(book);
    }
    fs.close();
}

void Books::writeFile()
{

}
