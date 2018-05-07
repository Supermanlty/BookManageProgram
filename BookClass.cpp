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
        };
};

void view()
{
        cout << stu.ISBN << endl;
        cout << stu.BookName << endl;
        cout << stu.Author << endl;
        cout << stu.ClassificationNumber <<  endl;
        cout << stu.PublishingHouse << endl;
        cout << stu.PublicationDate << endl;
        cout << stu.Price << endl;
}
