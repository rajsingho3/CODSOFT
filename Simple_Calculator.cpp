#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    double Firstnumber;
    double Secondnumber;
    char Symbol;
    char repeat;
    do
    {
        cout << "                         !!!     Welcome Back   !!!                 " << endl;
        cout << "Enter the First Digit :" << endl;
        cin >> Firstnumber;
        cout << "Enter the Operation Symbol :" << endl;
        cin >> Symbol;
        cout << "Enter the Second number :" << endl;
        cin >> Secondnumber;
        if (Symbol == '+')
        {
            cout << "Adding the two number......" << endl;
            cout << Firstnumber + Secondnumber << endl;
        }
        else if (Symbol == '-')
        {
            cout << "Subtracting the two number......" << endl;
            cout << Firstnumber - Secondnumber << endl;
        }
        else if (Symbol = '*')
        {
            cout << " Multiplication of two number......." << endl;
            cout << Firstnumber * Secondnumber << endl;
        }
        else if (Symbol = '/')
        {
            cout << "Division two numbers" << endl;
            cout << Firstnumber / Secondnumber << endl;
        }
        else
        {
            cout << "Invalid Operation Symbol " << endl;
        }

        cout << "Press n to stop the operation, or Press Enter to continue " << endl;
        cin.ignore();
        cin.get(repeat);

    } while (repeat != 'n' && repeat != 'N');

    cout << "Thanks For Using" << endl;

    return 0;
}

// COde sumbited By
// Raj Singh
