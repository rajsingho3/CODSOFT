#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main()
{
    // Genertating the Random number
    srand(time(0));
    // the Number between  two digits number
    int Generated_Number = rand() % 100 + 1;
    int Guessed_number;
    int attempt = 0;

    cout << "                            !!!     Welcome Back      !!!                       " << endl;
    cout << "                                    Number Guessing Game                        " << endl;
    cout << "  Starting........" << endl;
    cout << "Guess the Number  in Two digits " << endl;

    do
    {
        cout << "Enter the guessing number" << endl;
        cin >> Guessed_number;
        attempt++;
        if (Guessed_number < Generated_Number)
        {
            cout << "You are guessing the lower number" << endl;
            cout << " Let's Try again !!" << endl;
        }
        else if (Guessed_number > Generated_Number)
        {
            cout << "You are guessed the Greater number  " << endl;
            cout << "Let's try again !!" << endl;
        }
        else
        {
            cout << "Congratulations! You Guess the number" << endl;
            break;
        }
        // Try to help to the Gammer in after three atempts

        if (attempt == 3)
        {
            cout << "Lets !! I Have Give You Hint that you are closer OR Far" << endl;
            if (abs(Guessed_number - Generated_Number) <= 10)
            {
                cout << "You closer Generated  the number" << endl;
            }
            else
            {
                cout << "You far the generated number" << endl;
            }
        }

    } while (Guessed_number != Generated_Number);
    cout << "Thanks For Playing this Game" << endl;

    return 0;
}

// Code Sumbited By
// RAJ SINGH