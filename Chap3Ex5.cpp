#include <iostream>
using namespace std;


int main()
{
       
    float dist, usage, eff;
    
    cout<<"\n        This program calculates the fuel efficiency.\n";
    cout<<"     --------------------------------------------------\n";
    cout<<"\n   First of all, please, enter the distance (in miles): ";
    cin >> dist;
    cout << "   And input the amount of the gasoline used (in gallons): ";
    cin >> usage;
    
    eff = dist/usage;
    
    cout << "\n    Thus, one gallon lets you go " << eff << " miles.\n";
    cout << "\n\t";
    system("pause");
    return 0;
}
