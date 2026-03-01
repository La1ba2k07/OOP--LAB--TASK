/*
Creat a class student with constructor and destructor. Write two functions:one that takes a student by value and one that takes a student by reference.
Implement class student with comstructor, copy constructor, and destructor.
Write void displayByValue(student s) and void displayByRef(student &s).
Call both functions from main and observe the out put.
*/
#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:

    // 🔹 Constructor
    // Jab object create hota hai tab yeh run hota hai
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout << "Constructor Called" << endl;
    }

    // 🔹 Copy Constructor
    // Jab object ki copy banai jati hai tab yeh call hota hai
    Student(const Student &s)
    {
        rollNo = s.rollNo;
        name = s.name;
        cout << "Copy Constructor Called" << endl;
    }

    // 🔹 Destructor
    // Jab object destroy hota hai (scope se bahar jata hai)
    ~Student()
    {
        cout << "Destructor Called for Roll No: " << rollNo << endl;
    }

    // 🔹 Display Function
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "------------------" << endl;
    }
};


// 🔹 Function that takes object by VALUE
// Yahan object ki copy banti hai
void displayByValue(Student s)
{
    cout << "Inside displayByValue (Pass by Value)" << endl;
    s.display();
}


// 🔹 Function that takes object by REFERENCE
// Yahan copy nahi banti, original object use hota hai
void displayByRef(Student &s)
{
    cout << "Inside displayByRef (Pass by Reference)" << endl;
    s.display();
}


int main()
{
    // Object create ho raha hai
    Student s1(1, "Ali");

    cout << "\nCalling displayByValue Function\n";
    displayByValue(s1);   // Yahan copy constructor call hoga

    cout << "\nCalling displayByRef Function\n";
    displayByRef(s1);     // Yahan copy constructor call nahi hoga

    return 0;
}