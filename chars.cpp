#include <iostream>

using namespace std;

int main()
{
    string street;
    cout << "Enter Street: ";
    getline(cin, street);

    string city;
    cout << "Enter City: ";
    getline(cin, city);

    string state;
    cout << "Enter State: ";
    getline(cin, state);

    string zipcode;
    cout << "Enter Zipcode: ";
    getline(cin, zipcode);

    cout << street << endl
         << city << ", " << state << ", " << zipcode;
}