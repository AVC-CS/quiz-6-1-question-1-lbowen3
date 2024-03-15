#include <iostream>
using namespace std;


//********************
// Declare Function Prototypes
//********************

void getTwoValues(int &, int &);
int getNextPrime(int);
int getPrevPrime(int);
int isPrime(int);


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
    while (true)
    {
        num++;
        if(isPrime(num)){
            return num;
        }
    }
}
int getPrevPrime(int num)
{
    while (true)
    {
        num--;
        if(isPrime(num)){
            return num;
        }
    }
}
int isPrime(int num)
{
    for(int i=2; i<num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}