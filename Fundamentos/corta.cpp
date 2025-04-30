#include <iostream>
using namespace std;

int main()
{
    float num1, num2, resultado int opcion;
    cout << "ingrese el primer numero";
    cin >> num1;
    cout << "ingrese el segundo numero";
    cin >> num2;

    cout << "seleccione una operacion" << endl;
    cout << "1. suma" << endl;
    cout << "2. resa" << endl;
    cout << "3. multiplicaicon" << endl;
    cout << "4. divison" << endl;
    cout << "opcion";
    cin >> opcion;

        switch (opcion)
    {
    case 1:
        resultado = num1 + num2;
        cout << "El resultado de la suma es: " << resultado << endl;
        break;
    case 2:
        resultado = num1 - num2;
        cout << "El resultado de la resta es: " << resultado << endl;
        break;
    case 3:
        resultado = num1 * num2;
        cout << "El resultado de la multiplicación es: " << resultado << endl;
        break;
    case 4:
        // Verificar si el segundo número es cero antes de realizar la división
        if (num2 != 0)
        {
            resultado = num1 / num2;
            cout << "El resultado de la división es: " << resultado << endl;
        }
        else
        {
            cout << "Error: División por cero no permitida." << endl;
        }
        break;
    default:
        cout << "Opción no válida. Por favor, elija una opción del 1 al 4." << endl;
        return 1; // Salida temprana del programa si la opción no es válida
    }

    // Usar if-else para verificar si el resultado es positivo, negativo o cero
    if (resultado > 0)
    {
        cout << "El resultado es positivo." << endl;
    }
    else if (resultado < 0)
    {
        cout << "El resultado es negativo." << endl;
    }
    else
    {
        cout << "El resultado es cero." << endl;
    }
    return 0;
}