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
 //   string name, author, publisher, category;

    cout<<"Enter name book ";
    getline(cin, this->nameBook);

    cout<<"Enter name Author ";
    getline(cin, this->author);

    cout<<"Enter name Publisher ";
    getline(cin, this->NXB);

    cout<<"Enter Category Code ";
    getline(cin, this->categoryCode);

    system("cls");
    return true;
}
// CHinh sua thong tin cua sach
bool Book::edit()
{
    display();
    bool check = false;
    int choice;
    cout<<"1. Edit Name book"<<endl;
    cout<<"2. Edit Author"<<endl;
    cout<<"3. Edit Publisher"<<endl;
    cout<<"4. Edit Category"<<endl;
    cout<<"Plese enter your choose ";
    do{
        cin>>choice;
        system("cls");
        switch (choice)
        {
        case 1:
        {
            display();
            cout<<"Enter Name Book you want to edit ";
            cin>>this->nameBook;
            check = true;
            cout<<"Edit success "<<endl;
        //    system("cls");
            break;
        }
         case 2:
        {
            display();
            cout<<"Enter Author you want to edit ";
            cin>>this->author;
            check = true;
            cout<<"Edit success "<<endl;
        //    system("cls");
            break;
        }
        case 3:
        {
            display();
            cout<<"Enter Publisher you want to edit ";
            cin>>this->NXB;
            check = true;
            cout<<"Edit success "<<endl;
         //   system("cls");
            break;
        }
        case 4:
        {
            display();
            cout<<"Enter Category want to edit ";
            cin>>this->categoryCode;
            check = true;
         //   system("cls");
            cout<<"Edit success "<<endl;
            break;
        }
        default:
            cout<<"Your choose error. Plese try again ";
            check = false;
        }

    }while(!check);
    string test;
    cout<<"Do you want to continue edit Y/N (YES/NO): ";
    do{
         cin>>test;
         if (test == "Y" or test == "y"){
            cout<<"Corrected book information"<<endl;
            system("cls");
            Book::edit();
         }

         else
            if(test == "N" or test =="n"){
                system("cls");
                 return true;
            }

            else
                cout<<"Invalid selection. Please re-enter ";
    }while(true);
 //   return true;
}
//IN cac thong tin cua sach
void Book::display()
{
    cout<<"Information book"<<endl;
    cout<<"Name: "<<this->nameBook<<", ";
    cout<<"Author: "<<this->author<<", ";
    cout<<"Publisher: "<<this->NXB<<", ";
    cout<<"Category: "<<this->categoryCode<<endl;
}
