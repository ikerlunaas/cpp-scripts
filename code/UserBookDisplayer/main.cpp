#include <iostream>
#include <string>

using namespace std;


class Book {
    public:
        string title;
        string author;
        int publicationYear;

        void displayInfo() {
            cout<<"Title: "<<title<<endl;
            cout<<"Author: "<<author<<endl;
            cout<<"Publication Year: "<<publicationYear<<endl;
        }
};

int main() {
    string bookTitle;
    string bookAuthor;
    int bookPublicationYear;
    Book userBook;

    cout<<"What should your book name? ";
    cin >> bookTitle;

    cout<<"Ok, now who created it? ";
    cin >> bookAuthor;

    cout<<"Nice! Now, what year was your book created? ";
    cin >> bookPublicationYear;


    userBook.title = bookTitle;
    userBook.author = bookAuthor;
    userBook.publicationYear = bookPublicationYear;
    
    cout<<"\n"<<endl;
    userBook.displayInfo();

    return 0;
}