#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:

    // Default Constructor
    BankAccount()
    {
        accountHolderName = "Unknown";
        accountNumber = 0;
        balance = 0;
    }

    // Setters
    void setName(string name) { 
        accountHolderName = name;
     }
    void setAccountNumber(int accNum) { 
        accountNumber = accNum; 
    }
    void setBalance(double bal) {
         balance = bal; 
        }

    // Display Function
    void displayAccountInfo()
    {
        cout << "\nAccount Information\n";
        cout << "Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount acc1;
    string name;
    int accNum;
    double bal;

    // Input Name with validation
    while(true)
    {
        cout << "Enter Account Holder Name: ";
        getline(cin, name);
        if(name.empty())
            cout << "Name cannot be empty. Please enter again.\n";
        else
        {
            acc1.setName(name);
            break;
        }
    }

    // Input Account Number with validation
    while(true)
    {
        cout << "Enter Account Number (5 digits): ";
        cin >> accNum;

        if(accNum >= 10000 && accNum <= 99999)
        {
            acc1.setAccountNumber(accNum);
            break;
        }
        else
            cout << "Invalid Account Number. Must be 5 digits. Try again.\n";
    }

    // Input Balance with validation
    while(true)
    {
        cout << "Enter Balance: ";
        cin >> bal;

        if(bal >= 0)
        {
            acc1.setBalance(bal);
            break;
        }
        else
            cout << "Invalid Balance. Cannot be negative. Try again.\n";
    }

    // Display Account Info
    acc1.displayAccountInfo();
    return 0;
}