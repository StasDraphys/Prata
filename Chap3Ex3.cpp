#include <iostream>
using namespace std;


int main()
{
       
    const unsigned short k=60;
    
    unsigned short degrees, minutes, seconds;
    double deg;
    
    cout<<"\n     This program translates a latitude into decimal representation.\n";
    cout<<"    -----------------------------------------------------------------\n";
    
    cout<<"\n   First of all, enter the degrees: ";
    cin >> degrees;
    cout<<"   Next, enter the minutes of arc: ";
    cin >> minutes;
    cout<<"   Finally, enter the seconds of arc: ";
    cin >> seconds;
    
    deg = degrees + double(k*minutes + seconds)/(k*k);
    
    cout << endl;
    cout << "\n   So, this latitude is equal to: " << deg << " degrees.\n";
    cout << "\n    ";
    system("pause");
    return 0;
}
