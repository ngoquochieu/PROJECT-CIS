#include "Books.h"
#include "Book.h"
#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
using namespace std;
Books::Books()
{
    //ctor
}

Books::~Books()
{
    //dtor
}
// Them moi mot quyen sach
bool Books::add()
{
    bool check = false;
    do{
    system("cls");
    string nameBook, author, NXB, categoryCode;
    fflush(stdin);
    cout<<"Enter name book ";
    getline(cin, nameBook);

    cout<<"Enter name Author ";
    getline(cin, author);

    cout<<"Enter name Publisher ";
    getline(cin, NXB);

    cout<<"Enter Category Code ";
    getline(cin, categoryCode);
    system("cls");
    cout<<"Add success\n";
    Book b(books.size() + 1, nameBook, author, NXB, categoryCode);
 //   books.push_back(b);
    books.emplace_back(b);
    string test;
    bool check2 = false;
    cout<<"Do you want to continue using the newly added functionality Y/N (YES/NO): ";
    do{
         cin>>test;
         if (test == "Y" or test == "y"){
            cout<<"Press Enter to continue\n";
//            system("pause");
            getch();
//            cin.ignore();
            check = true;
            check2 = false;
         }

         else
            if(test == "N" or test =="n"){
                cout<<"Press any key to finish\n";
 //               system("pause");
                getch();
 //               cin.ignore();
                check = false;
                check2= false;
//                system("cls");

            }
            else{
                cout<<"Invalid selection. Please re-enter ";
                check2 = true;}
    }while(check2);
    }while(check != false);
    return true;
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
