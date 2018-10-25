#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    
    char fname[20];
    char lname[11];
    char str[79]="  Here's the information in a single string: ";
    
    cout<<"\n     This program works with the strings in the C style.\n";
    cout<<"    -----------------------------------------------------\n";
    cout<<"\n   1. Please, enter your first name (no more than 19 letters):\n      ";
    cin.getline(fname, 20);
    cout<<"\n   2. Now, enter your last name (no more than 10 letters):\n      ";
    cin.getline(lname, 11);
    cout<<"\n\n";
    
    strcat(str, lname);
    strcat(str, ", ");
    strcat(str, fname);
    
    cout << str;
        
    cout << "\n\n     ";
    system("pause");
    return 0;
}
