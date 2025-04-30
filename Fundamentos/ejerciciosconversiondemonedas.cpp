#include <iostream>
using namespace std;

int main ()
{
    int Conversion;
    float Number1, euro = 0.88, jpy = 142.89, ghp = 0.75;

    cout << "enter ur Conversion" << endl;
    cout << "1. Dollar ---> euro" << endl;
    cout << "2. Dollar ---> jpy" << endl;
    cout << "3. Dollar ---> ghp" << endl;
    cout << "Conversion:";
    cin >> Conversion;

    cout << "enter ur number"
    cin >> Number1;

    switch (Conversion)
    {
    case 1:
    Conversion = Number1 * euro
    cout << "ur conversion is" << Conversion << endl;
    break;
    case 2:
    Conversion = Number1 * jpy
    cout << "ur conversion is" << Conversion << endl;
    break;
    case 3:
    Conversion = Number1 * ghp
    cout << "ur conversion is" << Conversion << endl;
    break;
    }
    return 0;
}