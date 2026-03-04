#include <iostream>
using namespace std;

int main() 
{
    int fuel, trips;

    cout << "Enter fuel: ";
    cin >> fuel;

    cout << "Enter number of trips in the dauy: ";
    cin >> trips;

    fuel = fuel - (trips * 2);

    cout << "Remaining Fuel: " << fuel;

    return 0;
}

