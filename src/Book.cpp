#include "Book.h"
#include<iostream>
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
Book::Book()
{
    //ctor
}

Book::~Book()
{
    //dtor
}
// Nhap thong tin cua sach
bool Book::input()
{
    string name, author, publisher, category;
    cout<<"Enter name book ";
    getline(cin, name);
    this->nameBook = name;
    cout<<"Enter name Author ";
    getline(cin, author);
    this->author = author;
    cout<<"Enter name Publisher ";
    getline(cin, publisher);
    this->publisher = publisher;
    cout<<"Enter Category Code ";
    getline(cin, category);
    this->categoryCode = category;
    return true;
}
// CHinh sua thong tin cua sach
bool Book::edit()
{
    bool check = false;
    int choice;
    cout<<"1. Edit Name book"<<endl;
    cout<<"2. Edit Author"<<endl;
    cout<<"3. Edit Publisher"<<endl;
    cout<<"4. Edit Category"<<endl;
    cout<<"Plese enter your choose ";
    do{
        cin>>choice;
        switch (choice)
        {
        case 1:
        {
            string name;
            cout<<"Enter Name Book you want to edit ";
            cin>>name;
            this->nameBook = name;
            check = true;
            break;
        }
         case 2:
        {
            string author;
            cout<<"Enter Author you want to edit ";
            cin>>author;
            this->author = author;
            check = true;
            break;
        }
        case 3:
        {
            string publisher;
            cout<<"Enter Publisher you want to edit ";
            cin>>publisher;
            this->publisher = publisher;
            check = true;
            break;
        }
        case 4:
        {
            string categoryCode;
            cout<<"Enter Category want to edit ";
            cin>>categoryCode;
            this->categoryCode = categoryCode;
            check = true;
            break;
        }
        default:
            cout<<"Your choose error. Plese try again ";
            check = false;
        }

    }while(check != true);
    string test;
    cout<<"Do you want to continue edit (Y/N): ";
    do{
         cin>>test;
         if (test == "Y"){
            cout<<"Corrected book information"<<endl;
            Book::display();
            Book::edit();
         }

         else
            if(test == "N")
                return true;
            else
                cout<<"Invalid selection. Please re-enter ";
    }while(test != "Y" and test != "N");
 //   return true;
}
//IN cac thong tin cua sach
void Book::display()
{
    cout<<"Name: "<<this->nameBook<<", ";
    cout<<"Author: "<<this->author<<", ";
    cout<<"Publisher: "<<this->nameBook<<", ";
    cout<<"Category: "<<this->categoryCode<<endl;
}
