#include <iostream>
using namespace std;

void mice(void)
     {
     cout << "\tThree blind mice\n";
     }


void runny(void)
     {
     cout << "\tSee how they run\n";
     }

int main()
{
    cout << "\n   This program displays some text on the console.\n";
    cout << "  -------------------------------------------------\n";
    cout << "\n";
    mice();
    mice();
    runny();
    runny();
    cout << "\n ";
    system("pause");
    return 0;
}
