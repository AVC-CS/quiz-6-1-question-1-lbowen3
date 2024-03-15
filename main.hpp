#include <iostream>
using namespace std;


//********************
// Declare Function Prototypes
//********************

int getTwoValues(int, int);
int getNextPrime(int);
int getPrevPrime(int);


// ******************************
// Implement all your functions here
// ******************************

int getTwoValues(int begin, int end)
{
    do
    {
        cout << "Enter beginning and end values: ";
        cin >> begin >> end;
    } while (begin >= end);
    return begin, end;
}
int getNextPrime(int num)
{

}
int getPrevPrime(int num)
{

}