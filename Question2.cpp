/*
Task2 : Creat a class memory check with constructors, destructors, and a method to print the object address using the this pointer.Creat objects onboth the stack and heap.Delete only one heap object.Emplement class memoryCheck with constructor, and address printing. Create at least one stack object and two heap objects(using view). Delete only one of the heap objects and observe the results. 
*/
#include <iostream>
using namespace std;

// Class definition
class Tracer {
public:
    string name;

    // Constructor runs when object is created
    Tracer(string n = "Guest") {
        name = n;
        cout << "Created: " << name << endl;
    }

    // Destructor runs when object is destroyed
    ~Tracer() {
        cout << "Destroyed: " << name << endl;
    }
};

int main() {

    // Stack object
    // Ye automatically destroy hoga jab main end hoga
    Tracer stackObj("Stack Object");

    // Heap object
    // Ye new se create hua hai
    // Iska destructor automatically nahi chalega
    Tracer* heapObj = new Tracer("Heap Object");

    // Manually delete karna zaroori hai
    // Agar delete na karein to memory leak hoga
    delete heapObj;

    return 0;
}