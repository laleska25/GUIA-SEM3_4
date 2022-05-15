#include <iostream>
using namespace std;

int i;
int hijos;
int contador=0,
    contador5=0,
    contador6=0;


void entradahijos ()
{
    for (i=0; i<=30; i++)
    {
        cout << "Hijos de la persona ["<<i<<"]: ";
        cin >> hijos;

        if (hijos > 7)
        {
            cout << "la cantidad de hijos ingresada es incorrecta \n";
        }

        if (hijos < 3)
        {
            contador++;
        }

        if (hijos >= 3 && hijos < 5)
        {
            contador5++;
        }

        if (hijos <= 6)
        {
            contador6++;
        }

        cout << "La cantidad de hijos de la persona ["<<i<<"] es: "<< hijos << " ";
        cout << "\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        
    }

    cout << "***************************************************************\n";
    cout << "\nLa cantidad de personas que tienen menos de 3 hijos es: " << contador;
    cout << "\nLa cantidad de personas que tienen 3 a 5 hijos son: " << contador5;
    cout << "\nLa cantidad de personas que tienen por lo menos 6 hijos son: " << contador6;
}


int main ()
{
    // Datos
        entradahijos ();
    
}