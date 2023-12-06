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
    Book myBook;
    myBook.title = "My C++ Tutorial Book.";
    myBook.author = "ikerlunaas";
    myBook.publicationYear = 2023;

    myBook.displayInfo();


    return 0;
}