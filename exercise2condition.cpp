// exercise2condition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()

{
    int battery, charging;

    cout << "Enter Battery level:";
    cin >> battery;

    cout << "It is charging: (1 = yes, 0 = no)";
    cin >> charging;

    cout << "Battery below 20:" << (battery < 20) << endl;
    cout << "Battery saver on:" << (battery < 20 && !charging) << endl;
    cout << "Battery are greater:" << (battery == 100 || charging) << endl;
    cout << "Battery level okay:" << (battery >= 0 && battery <= 100) << endl;
    cout << "Battery chained comparison:" << (0 <= battery <= 100) << endl;





}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
