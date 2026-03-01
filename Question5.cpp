/*
Create two classes engine and car where car contains an engine object as a member. add constructors and destructors to both classes and creat a car object in main().
Implement class engine with constructor and destructor.
Implement class card that has an engine member variable.
Create a car objective in  main () and observe the construction and destruction order.
*/
#include <iostream>
using namespace std;

// Engine Class
class Engine
{
private:
    int power;   // Engine ki power store karne ke liye

public:
    //  Constructor
    // Jab Engine object create hota hai tab yeh call hota hai
    Engine(int p = 100)   // Agar koi value na mile to default power = 100
    {
        power = p;
        cout << "Engine Constructor Called, Power: " << power << endl;
    }

    //  Destructor
    // Jab Engine object destroy hota hai tab yeh call hota hai
    ~Engine()
    {
        cout << "Engine Destructor Called, Power: " << power << endl;
    }

    // Display Function
    void display()
    {
        cout << "Engine Power: " << power << endl;
    }
};

//  Car Class
class Car
{
private:
    string brand;    // Car ka brand
    Engine engine;   // Car ke andar Engine member object

public:
    // Constructor
    // Car create hoti hai tab yeh call hota hai
    // Engine member ko initialize karne ke liye member initializer list use ki
    Car(string b, int p) : engine(p)
    {
        brand = b;   // Car ka brand set karna
        cout << "Car Constructor Called, Brand: " << brand << endl;
    }

    //  Destructor
    // Car destroy hone par call hota hai
    ~Car()
    {
        cout << "Car Destructor Called, Brand: " << brand << endl;
    }

    //  Display Function
    void display()
    {
        cout << "Car Brand: " << brand << endl;
        engine.display();  // Engine details bhi show karo
        cout << "------------------------" << endl;
    }
};

int main()
{
    // Car object create
    // Pehle Engine construct hoga, phir Car constructor call hoga
    Car myCar("Toyota", 150);

    cout << "\nDisplaying Car Details\n";
    myCar.display();  // Car aur Engine details show karenge

    // Jab main end hota hai:
    // Car destructor call hoga pehle, phir Engine destructor
    return 0;
}