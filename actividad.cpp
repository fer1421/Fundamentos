// desarrolle un programa en c++ que solicite a un usuario ingresar su salario mensual bruto y realice los siguientes calculos
//!- descuentos obligatorios, el seguro social 3% del salario con un tope max de 30 y solo aplica hasta 1000
// 2- af´p es el 7.25% del salario
// 3- renta, se calculo del salario neto despues de isss y la afp utilizando la siueinte tabla
// 472 exento, hasta el 472.01 a 895.24 el 10, hasta 895.25 a 2,038.10 el 20%, mas de 2,038,10 30%
#include <iostream>
using namespace std;
int main()
{
    int opcion;
    float salario, descuento, afp, renta, descuento1, descuento2, afp1;
    cout << "--------------------------------------" << endl;
    cout << "salario" << endl;
    cout << "--------------------------------------" << endl;
    cout << "ingrese su salario" << endl;
    cin >> salario;
    if (salario <= 0)
    cout <<"porfavor ingrese su salario correctamente"
    return 1;
    
    
    cout << "--------------------------------------" << endl;
    cout << "eliga la opcion que desea calcular" << endl;
    cout << "--------------------------------------" << endl;
    cout << " 1-ISSS" << endl;
    cout << " 2-AFP" << endl;
    cout << " 3-Renta" << endl;
    cout << " 4-Total" << endl;
    cout << " 5- salir" <<endl;
    cout << "opcion" << endl;
    cin >> opcion;
    cout << "--------------------------------------" << endl;
    
    
    switch (opcion)
    {
    case 1:
    if (salario <= 1000)
    descuento = salario * 0.03 
    descuento2 = salario - descuento 
    else if (salario >= 1000)
    descuento1 = salario - 30 
    else{}
    if (salario <= 1000)
    cout << "tu salario con descuento de ISSS es" << descuento2 << endl;
    else if (salario >= 1000)
    cout << "tu salario con descuento de ISSS es" << descuento1 << endl;
    else{}
    break;
    case 2:
    afp = salario * 0.0725 afp1 = afp - salario
    cout << "su salario con descuento de afp es" << afp1 << endl;
    break;
    case 3:
    if (salario <=1000)
}