/*
Imagine a publishing company that markets both book and audio-cassette versions of its
works.
▪ Create a class publication that stores the title (a string) and price (type float) of a publication.
▪ From this class derive two classes: book, which adds a page count (type int), and tape, which adds a playing time in minutes (type float).
▪ Each of these three classes should have a getdata() function to get its data from the user at the keyboard, and a putdata() function to display its data.
▪ Write a main() program to test the book and tape classes by creating instances of them, asking the user to fill in data with getdata(), and then displaying the data with putdata()
*/

#include <iostream>
#include <string>

class Publication {
private:
    std::string title;
    float price;

public:
    void getData() {
        std::cout << "Enter the title: "; getline(std::cin, title);
        std::cout << "Enter the price: "; std::cin >> price;
    }

    void putData() const {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Price: " << price << std::endl;
    }
};

class Book : public Publication {
private:
    int pageCount;

public:
    void getData() {
        Publication :: getData();
        std::cout << "Enter the number of pages: "; std::cin >> pageCount;
    }

    void putData() const {
        Publication :: putData();
        std::cout << "Number of pages: " << pageCount << std::endl;
    }
};

class Tape : public Publication {
private:
    float playingTime_min;

public:
    void getData() {
        Publication :: getData();
        std::cout << "Enter playing time in minutes: "; std::cin >> playingTime_min;
    }

    void putData() const {
        Publication :: putData();
        std::cout << "Playing time in minutes: " << playingTime_min << std::endl;
    }
};

int main() {
    Book firstBook;
    Tape firstTape;

    std::cout << "\t\tENTER BOOK DATA:\n";
    firstBook.getData();
    std::cout << "\n\t\tBOOK DETAILS\n";
    firstBook.putData();

    std::cout << std::endl;

    std::cout << "\t\tENTER TAPE DATA:\n";
    firstTape.getData();
    std::cout << "\n\t\tTAPE DETAILS\n";
    firstTape.putData();

    return 0;
}
