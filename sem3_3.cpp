#include <iostream>
using namespace std;

int sueldo;
int i;
int suma=0;
int contador=0,
    contador25=0,
    contador250=0;

/*
Diseñe un programa que genere aleatoriamente los sueldos enteros de 100 empleados de una 
empresa con valores del intervalo 850 a 3150 y muestre lo siguiente: 
 
• Los sueldos generados 
• El sueldo promedio 
• La cantidad de empleados que ganan menos de S/. 1750 
• La cantidad de empleados que ganan no menos de S/. 1750 pero menos de  S/. 2500 
• La cantidad de empleados que ganan no menos de S/. 2500 
*/

void sueldos ()
{
    for (i=1; i<=5; i++)
    {
        cout << "Sueldo del empleado ["<<i<<"]: ";
        cin >> sueldo;
             
        if (sueldo < 850 || sueldo > 3150)
        {
            cout << "Los datos ingresados son incorrectos, plis ingrese de nuevo :)\n";
        }
        else
        {
            cout << "El sueldo ingresado es: "<< sueldo << " " << endl;
        }
        
        suma = suma + sueldo;

        if (sueldo < 1750)
        {
            contador++;
        }

        if (sueldo > 1750 && sueldo < 2500)
        {
            contador25++;
        }

        if (sueldo > 2500)
        {
            contador250++;
        }
            
    }
        cout << "******************************\n";
        cout << "El promedio de los sueldos es: " << suma/5;
        cout << "\nLa cantidad de empleados que ganan menos de S/. 1750 es: " << contador;
        cout << "\nLa cantidad de empleados que ganan no menos de S/. 1750 pero menos de  S/. 2500 es: "<< contador25;
        cout << "\nLa cantidad de empleados que ganan no menos de S/. 2500 son: "<< contador250;
}

int main ()
{
    //Dexclaracino
    sueldos ();
    
}