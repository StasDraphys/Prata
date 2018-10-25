#include <iostream>
#include <string>
using namespace std;


int main()
{

    string name, dessert;
    
    cout<<"\n     This program uses the STRING class for the first time.\n";
    cout<<"    --------------------------------------------------------\n";
    cout<<"\n   1. Please, enter your name:\n      ";
    getline(cin, name);
    cout<<"\n   2. And your favorite dessert:\n      ";
    getline(cin, dessert);
    cout<<"\n\n";
    
    cout<<"     Very good news!\n";
    cout<<"     I have a tasty "<< dessert << " for you, " << name << ".\n";
    cout << "\n    ";
    system("pause");
    return 0;
}
