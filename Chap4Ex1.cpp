#include <iostream>
using namespace std;


int main()
{

    char grade;
    char fname[20];
    char lname[15];
    unsigned short age;
    
    cout<<"\n     This program dispalys pre-enetered data.\n";
    cout<<"    ------------------------------------------\n";
    cout<<"\n   What is your first name? ";
    cin.getline(fname, 20);
    cout<<"   What is your last name? ";
    cin.getline(lname, 15);
    cout<<"   What letter grade do you deserve? ";
    cin.get(grade);
    cout<<"   What is your age? ";
    cin >> age;
    cout << "\n\n";
    cout << "\n Thus, we got - Name : " << lname << ", " << fname;
    cout<< "\n              - Grade: " << char(grade + 1);
    cout<<"\n              - Age  : " << age;
    
    cout << "\n\n    ";
    system("pause");
    return 0;
}
