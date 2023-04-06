#include "iostream"
#include "squareEquation.h"

using namespace std;

int main()
{
    double a,b,c;

    cout << "Enter 3 numbers:";
    cin >> a >> b >> c;
    cout << endl;

    squareEquation function(a,b,c);

    cout << "What do you want?" << endl;
    cout << "Calculation value of function in point - 1" << endl;
    cout << "Find count of roots - 2" << endl;
    cout << "Find roots - 3" << endl;
    cout << "Find minimum value of function - 4" << endl;
    cout << "Print a function - 5" << endl;
    cout << "If you want to stop the program - write 'Stop'" << endl;
    cout << "------------------------------------------------" << endl;

    string operation;

    while (true)
    {
        cin >> operation;

        if (operation == "Stop")
            return 0;

        if (operation == "1")
        {
            double number;
            cout << "Write a point >";
            cin >> number;
            cout << "Value function in point '" << number << "' = " << function.calculation(number) << endl;
        }

        if (operation == "2")
            cout << "Count of roots = " << function.countRoot() << endl;

        if (operation == "3")
        {
            cout << "Roots -> ";
            function.roots();
        }

        if (operation == "4")
            cout << "Minimum value of function = " << function.min() << endl;

        if (operation == "5")
            function.print();

        cout << "------------------------------------------------" << endl;
    }
}