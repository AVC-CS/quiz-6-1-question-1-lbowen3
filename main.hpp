#include <iostream>
using namespace std;


//********************
// Declare Function Prototypes
//********************

void getTwoValues(int &, int &);
int getNextPrime(int);
int getPrevPrime(int);


// ******************************
// Implement all your functions here
// ******************************

void getTwoValues(int &begin, int &end)
{
    do
    {
        cout << "Enter beginning and end values: ";
        cin >> begin >> end;
    } while (begin >= end);
    return;
}
int getNextPrime(int num)
{

}
int getPrevPrime(int num)
{

}