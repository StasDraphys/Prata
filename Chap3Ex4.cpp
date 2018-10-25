#include <iostream>
using namespace std;


int main()
{
       
    const unsigned short k=60;
    
    unsigned long seconds;
    
    cout<<"\n      This program translates the seconds into days, minutes & seconds.\n";
    cout<<"     -------------------------------------------------------------------\n";
    cout<<"\n\tPleae, enter the integer number of seconds: ";
    cin >> seconds;
    cout << endl;
    
    cout << "\n   So, this period of time = " << seconds/(k*k*k) << " days, ";
    seconds = seconds%(k*k*k);
    cout << seconds/(k*k)<<" hours, ";
    seconds = seconds%(k*k);
    cout << seconds/k << " minutes, ";
    cout << seconds%k << " seconds.\n";
       
    cout << "\n\t";
    system("pause");
    return 0;
}
