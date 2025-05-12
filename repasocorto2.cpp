#include <iostream>
using namespace std;

int main()
{
    float billetera = 100, edad;
    int menuGlobal, opcion;

    cout << "Hola, antes de empezar, ¿Qué edad posees?" << endl;
    cin >> edad;

    cout << "Muy bien, empecemos :D" << endl;
    cout << "------MAC :3 MENU------" << endl;
    cout << "1. Menú de la mañana" << endl;
    cout << "2. Menú de la tarde" << endl;
    cout << "3. Menú de la noche" << endl;
    cout << "4. Salir" << endl;
    cout << "¿Qué menú desea visualizar?" << endl;
    cin >> menuGlobal;

    switch (menuGlobal)
    {
    case 1:
        cout << "------MENÚ DE LA MAÑANA------" << endl;
        cout << "1. Cajita feliz ($5)" << endl;
        cout << "2. Mac Muffin ($3)" << endl;
        cout << "3. Hotcake ($4.75)" << endl;
        cout << "4. Jugo ($1.25)" << endl;
        cout << "5. Papas ($2)" << endl;
        cout << "6. Salir" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Usted ha seleccionado una Cajita Feliz" << endl;
            if (edad >= 0 && edad < 7)
            {
                billetera -= 5;
            }
            else if (edad >= 7 && edad < 14)
            {
                cout << "Se le cobrará el doble." << endl;
                billetera -= 10;
            }
            else if (edad >= 14 && edad < 18)
            {
                cout << "Se le cobrará el triple." << endl;
                billetera -= 15;
            }
            else if (edad >= 18)
            {
                cout << "El colesterol, papá... No puedes comprar eso." << endl;
                return 1;
            }
            break;

        case 2:
            cout << "Usted ha seleccionado un Mac Muffin" << endl;
            billetera -= 3;
            break;

        case 3:
            cout << "Usted ha seleccionado un Hotcake" << endl;
            billetera -= 4.75;
            break;

        case 4:
            cout << "Usted ha seleccionado un Jugo" << endl;
            billetera -= 1.25;
            break;

        case 5:
            cout << "Usted ha seleccionado unas Papas" << endl;
            billetera -= 2;
            break;

        case 6:
            cout << "Adiós" << endl;
            return 0;

        default:
            cout << "Ingrese una opción válida" << endl;
            return 1;
        }
        break;

    case 2:
        cout << "------MENÚ DE LA TARDE------" << endl;
        cout << "1. Cajita feliz ($5)" << endl;
        cout << "2. Mac Hamburguesa ($3)" << endl;
        cout << "3. Pasta ($4.75)" << endl;
        cout << "4. Jugo ($1.25)" << endl;
        cout << "5. Papas ($2)" << endl;
        cout << "6. Salir" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Usted ha seleccionado una Cajita Feliz" << endl;
            if (edad >= 0 && edad < 7)
            {
                billetera -= 5;
            }
            else if (edad >= 7 && edad < 14)
            {
                cout << "Se le cobrará el doble." << endl;
                billetera -= 10;
            }
            else if (edad >= 14 && edad < 18)
            {
                cout << "Se le cobrará el triple." << endl;
                billetera -= 15;
            }
            else if (edad >= 18)
            {
                cout << "El colesterol, papá... No puedes comprar eso." << endl;
                return 1;
            }
            break;

        case 2:
            cout << "Usted ha seleccionado una Mac Hamburguesa" << endl;
            billetera -= 3;
            break;

        case 3:
            cout << "Usted ha seleccionado una Pasta" << endl;
            billetera -= 4.75;
            break;

        case 4:
            cout << "Usted ha seleccionado un Jugo" << endl;
            billetera -= 1.25;
            break;

        case 5:
            cout << "Usted ha seleccionado unas Papas" << endl;
            billetera -= 2;
            break;

        case 6:
            cout << "Adiós" << endl;
            return 0;

        default:
            cout << "Ingrese una opción válida" << endl;
            return 1;
        }
        break;

    case 3:
        cout << "------MENÚ DE LA NOCHE------" << endl;
        cout << "1. Cajita feliz ($5)" << endl;
        cout << "2. Mac Hamburguesa ($3)" << endl;
        cout << "3. Pasta ($4.75)" << endl;
        cout << "4. Café ($1.25)" << endl;
        cout << "5. Encanelado ($2)" << endl;
        cout << "6. Salir" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Usted ha seleccionado una Cajita Feliz" << endl;
            if (edad >= 0 && edad < 7)
            {
                billetera -= 5;
            }
            else if (edad >= 7 && edad < 14)
            {
                cout << "Se le cobrará el doble." << endl;
                billetera -= 10;
            }
            else if (edad >= 14 && edad < 18)
            {
                cout << "Se le cobrará el triple." << endl;
                billetera -= 15;
            }
            else if (edad >= 18)
            {
                cout << "El colesterol, papá... No puedes comprar eso." << endl;
                return 1;
            }
            break;

        case 2:
            cout << "Usted ha seleccionado una Mac Hamburguesa" << endl;
            billetera -= 3;
            break;

        case 3:
            cout << "Usted ha seleccionado una Pasta" << endl;
            billetera -= 4.75;
            break;

        case 4:
            cout << "Usted ha seleccionado un Café" << endl;
            billetera -= 1.25;
            break;

        case 5:
            cout << "Usted ha seleccionado un Encanelado" << endl;
            billetera -= 2;
            break;

        case 6:
            cout << "Adiós" << endl;
            return 0;

        default:
            cout << "Ingrese una opción válida" << endl;
            return 1;
        }
        break;

    case 4:
        cout << "Hasta luego!" << endl;
        return 0;

    default:
        cout << "Opción inválida. Intente nuevamente." << endl;
        return 1;
    }

    cout << "Su saldo final es: $" << billetera << endl;
    return 0;
}