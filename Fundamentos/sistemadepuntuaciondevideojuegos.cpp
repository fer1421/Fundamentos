// pide el puntaje de un jugador 1-5 estrella y muestra un mensaje acorde su desempeño
#include <iostream>
using namespace std;

int main()
{
    int Points;
    cout << "enter ur Points";
    cin >> Points;

        switch (Points)
    {
    case 1:
        cout << "¿when u use ur hand?" << endl;
        break;
    case 2:
        cout << "u are so bad" << endl;
        break;
    case 3:
        cout << "its ok" << endl;
        break;
    case 4:
        cout << "fine" << endl;
        break;
    case 5:
        cout << "perfect" << endl;
        break;
    default:
        cout << "invalid. pls enter number 1 - 5." << endl;
    }
    return 0;
}