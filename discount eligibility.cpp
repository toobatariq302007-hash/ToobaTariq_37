#include <iostream>
using namespace std;

int main()
 {
    int amount;
    int card;

    cout << "Enter purchase amount: ";
    cin >> amount;

    cout << "Membership card? (1 = yes, 0 = no): ";
    cin >> card;

    if (amount > 5000 || card == true) 
	{
        cout << "Discount Applied";
    }

    if (!(amount > 5000 || card == true)) 
	{
        cout << "No Discount";
    }

    return 0;
}
