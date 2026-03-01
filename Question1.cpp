/*
Task 1: LIFO Behavior on Stack Create a class Tracer with a default constructor and destructor that print the object name. Create objects in main(), inside a nested block, and inside a function test(). • Implement class Tracer with constructor and destructor messages. • Create objects in main() scope, a nested {} block, and a separate function test(). • Observe and record the order of constructor and destructor calls. Questions: 1. Write the exact constructor and destructor execution order. 2. Explain why destructors follow LIFO (Last In, First Out) order. 3. Identify precisely when each object is destroyed.
*/

#include <iostream>
using namespace std;

class Tracer {
private:
    string name;

public:
    Tracer(string n="Laiba Sian") {
        name = n;
        cout << "Constructor called for: " << name << endl;
    }

    ~Tracer() {
        cout << "Destructor called for: " << name << endl;
    }
};

// Function that creates an object
void myFunction() {
    Tracer obj3("Function Object");
    cout << "Inside Function" << endl;
}

int main() {

    Tracer obj1("Main Object");

    {
        Tracer obj2("Block Object");
        cout << "Inside Block" << endl;
    }

    myFunction();

    cout << "End of main()" << endl;

    return 0;
}