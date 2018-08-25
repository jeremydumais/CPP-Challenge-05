#include <iostream>
#include <conio.h>
#include "include/prime.h"

using namespace std;

int GetInputNumber(string const &msg);

int main(int argc, char const *argv[])
{
    unsigned int number {0};
    cout << "Sexy prime pairs up to a limit" << endl;
    number = GetInputNumber("Enter the limit : ");

    //Calculation
    unsigned int sexyPrimeCount {0};
    for(unsigned int i=2;i<number;i++)
    {
        unsigned int secondNumber {i+6};
        if (prime::isPrime(i) && prime::isPrime(secondNumber))
        {
            if (sexyPrimeCount > 0)
                cout << ", ";
            cout << "(" << i << "," << secondNumber << ")";
            sexyPrimeCount++;
        }  

    }
    cout << endl;
    cout << "Press any key to continue... " << endl;
    getch();
    return 0;
}

int GetInputNumber(string const &msg)
{
    int retVal {0};
    cout << msg;
    
    while(!(cin >> retVal))
    {
        cin.clear();
        while (cin.get() != '\n') continue;
        cout << "Invalid number. Please try again : ";
    }
    return retVal;
}
