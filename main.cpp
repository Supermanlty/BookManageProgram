#include <iostream>
#include <string>

using namespace std;

class BookManage
{
    private:
        struct BookInfo
        {
            string ISBN;
            string BookName;
            string Author;
            char ClassificationNumber;
            string PublishingHouse;
            string PublicationDate;
            double Price;
        }Book[5000];
          int i = 0;
 
        void  entering()
        {
            if (i<0||i>5000)
            cout << "Something wrong" << endl;
            else
            {
            cout << "Input the ISBN of book" << endl;
             cin >>Book[i].ISBN;
               system("cls");
            cout << "Input the BookName of book" << endl;
             cin >>Book[i].BookName;
               system("cls");
            cout << "Input the ClassificationNumbe of book" << endl;
             cin >>Book[i].ClassificationNumber;
               system("cls");
            cout << "Input the PublishingHouse of book" << endl;
             cin >>Book[i].PublishingHouse;
               system("cls");
            cout << "Input the PublicationDate of book" << endl;
             cin >>Book[i].PublicationDate;
               system("cls");
            cout << "Input the Price of book" << endl;
             cin >>Book[i].Price;
               system("cls");
               i++;
            }
        } 
            
      













