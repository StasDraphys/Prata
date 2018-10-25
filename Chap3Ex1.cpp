#include <iostream>
using namespace std;


int main()
{
    
    unsigned short height;
       
    const unsigned short k=12;
    
    cout << "\n     This program translates inches into feet & inches.\n";
    cout<< "    ----------------------------------------------------\n";
    cout<< "\n   Please, enter your height as an integer number of inches: ";
    cin >> height;
    
    cout<< "   So, your height is " << height/k << " ft. "<< height%k << " in.\n";
    cout<<"\n\t";
    system("pause");
    return 0;
}
