/*
Create a clas book with a default constructor,parameterized constructor copy constructor. Creat multiple objects using different initialization techniques.
implement class book with all four special member function.
Creat objects using: dafault construction, parameterized construction and copy construction.
Use different copy syntax: Book b2=b1; and Book b3(b1);.
  */
 #include <iostream>   
using namespace std;  
class Book
{
private:
    int id;        // Data member to store book ID
    string title;  // Data member to store book title

public:

    // Default Constructor
    // This constructor runs when object is created without values
    Book()
    {
        id = 0;                 // Assign default value to id
        title = "No Title";     // Assign default title
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    // This constructor runs when values are passed at object creation
    Book(int i, string t)
    {
        id = i;       // Assign given value to id
        title = t;    // Assign given value to title
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor
    // This constructor copies data from another object
    Book(const Book &b)
    {
        id = b.id;        // Copy id from existing object
        title = b.title;  // Copy title from existing object
        cout << "Copy Constructor Called" << endl;
    }

    //  Destructor
    // This runs automatically when object goes out of scope
    ~Book()
    {
        cout << "Destructor Called for Book ID: " << id << endl;
    }

    // Member function to display book details
    void display()
    {
        cout << "Book ID: " << id << endl;
        cout << "Book Title: " << title << endl;
        cout << "----------------------" << endl;
    }
};

int main()
{
    // Default Construction
    // No values passed, so default constructor will run
    Book b1;
    b1.display();   // Show b1 data

    // Parameterized Construction
    // Values passed, so parameterized constructor will run
    Book b2(101, "C++ Programming");
    b2.display();   // Show b2 data

    //  Copy Construction (Syntax 1)
    // b3 is created as a copy of b2
    Book b3 = b2;
    b3.display();   // Show b3 data

    //  Copy Construction (Syntax 2)
    // Another way to copy object
    Book b4(b2);
    b4.display();   // Show b4 data

    return 0;  // Program ends, destructors will run automatically
}