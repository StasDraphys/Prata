
#include <iostream>

using namespace std;


int main()
{
    
    float weight;
    unsigned short feet;
    float  height;
    double bmi;
    
    const double lbtokg=2.2;
    const unsigned short ftoin=12;
    const double intom=0.0254;

    cout << "\n      This program calculates the Body Mass Index (BMI)\n";
    cout << "\n   First of all, you should input how tall you are (in feet): ";
    cin >> feet;
    cout << "     Now, add the inches for more precision: ";
    cin>> height;
    cout << "     So, your height = "<< feet <<" feet "<< height <<" inches.\n";
    
    cout <<"\n   Secondly, specify your weight in pounds: ";
    cin >> weight;
    cout << "     So, your weight = "<< weight<<" lbs.\n";
    
    cout <<"\n   ----------------------------------------------\n";
       
    height=feet*ftoin+height;
    cout << "\n     Height in inches = "<< height;
    height=height*intom;
    cout << "\n     Height in meters = "<< height;
    weight= weight/lbtokg;
    cout << "\n     Weight in kg = "<< weight;
    cout<<"\n";
    
    bmi=weight/(height*height);
    cout<<"\n   Finally, your BMI = "<<bmi;
    cout<<"\n\n ";
        
    system("pause");
    return 0;
}
