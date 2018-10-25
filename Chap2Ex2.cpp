
#include <iostream>
using namespace std;

const unsigned short k = 220;

int main()
{
    double dist;
    cout << "\n   This program translates the distance in furlongs into yards.\n";
    cout << "  --------------------------------------------------------------\n";
    cout << "\n Please, enter the distance in furlongs: ";
    cin >> dist;
    dist = dist*k;
    cout << "\n       Then, the same distance in yards: " << dist << endl;
    cout << "\n  ";
    system("pause");
    return 0;
}
