
// C++ program to implement the ATM
// Management System
#include <iostream>

using namespace std;
class ATM {

    // Private variables used inside class
private:
    string name;
    int acconumber;
    char type[10];
    int amount = 0;
    int total = 0;

    // Public variables
public:
    // Function to set the person's data
    void setvalue()
    {
        cout << "Enter the  name :";
        cin.ignore();

        // To use space in string
        getline(cin, name);

        cout << "\nEnter Account number :";
        cin >> acconumber;
        cout << "\nEnter  the Account type :";
        cin >> type;
        cout << "\nEnter  the Balance :";
        cin >> total;
    }

    // Function to display the required data
    void showdata()
    {
    cout<<"Display Information \n your Name is " <<name<<". Account number is "<<acconumber<<". Account type is "<< type<<"The account balance is "<<total<<"\n";
    }

    // Function to deposit the amount in ATM
    void deposit()
    {
        cout << "\nEnter amount to be Deposited :";
        cin >> amount;
    }

    // Function to show the balance amount
    void showbala()
    {
        total = total + amount;
        cout << "\nTotal balance is: " << total;
    }

    // Function to withdraw the amount in ATM
    void widrawl()
    {
        int a, avai_balance;
        cout << "Enter amount to withdraw :";
        cin >> a;
        avai_balance = total - a;
        cout << "Available Balance is " << avai_balance;
    }
};


int main()
{
    //  class
    ATM a;

    int choice;
        cout << "\n*~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~WELCOME~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~*\n\n";
    while (1) {
       cout << "\n*~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
           << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~*\n\n";
        cout << "Enter Your Choice\n";
        cout << "1. Enter name, Account "
             << "number, Account type\n";
        cout << "2. Balance Enquiry\n";
        cout << "3. Deposit Money\n";
        cout << "4. Show Total balance\n";
        cout << "5. Withdraw Money\n";
        cout << "6. Exit\n";
            cout << "\n*~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
           << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~*\n\n";
        cin >> choice;


        // Choices to select from
        switch (choice) {
        case 1:
            a.setvalue();
            break;
        case 2:
            a.showdata();
            break;
        case 3:
            a.deposit();
            break;
        case 4:
            a.showbala();
            break;
        case 5:
            a.widrawl();
            break;
        case 6:
             cout << "\n*~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
              << "~~ THANKS FOR COMING ~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~*\n\n";
            exit(1);
            break;
        default:
            cout << "\nInvalid choice\n";
        }
    }
}

