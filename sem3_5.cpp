#include <iostream>
#include <cstring>
using namespace std;

/*
Escribir una lista de personas, con su sueldo y edad y mostrar la persona que 
gana mas y la que gana menos, asimismo la persona mas joven y la que tiene 
una edad promedio. 
*/

//Globales
struct Persona 
{
    string nomPersona;
    float suePersona;
    int edadPersona;

};

int main ()
{
    //Variables locales
    string bandera;
    int contador=0;
    int sueldoMe;
    int sueldoMax;
    int joven;
    int edadPromedio;
    int suma=0;


    //Crear la esructura
    Persona    persona[100];

    do
    {
        //crear registro de arreglos

        cout << "**************POS ("<< contador<<")**************\n";
        cout << "Ingresar nombre de la persona: ";
        getline(cin, persona [contador].nomPersona);
        cout << "Ingresar edad: ";
        cin >> persona [contador].edadPersona;
        cout << "Ingresar sueldo: ";
        cin >> persona [contador].suePersona;
        
        
        ++contador;
        cout << "Para continuar pulsar SI....";
        cin >> bandera;

        cin.ignore ();

    }
        while (bandera =="SI" || bandera == "si");

    //Listar Todos
    
    for (int i=0; i< contador; i++)
    {
        if (i==0)
        {
            sueldoMe = persona [i].suePersona;
        }
        else
        {
            if (sueldoMe > persona [i].suePersona)
            {
                sueldoMe = persona [i].suePersona;
            }
        }
    }

    for (int i=0; i< contador; i++)
    {
        if (i==0)
        {
            sueldoMax = persona [i].suePersona;
        }
        else
        {
            if (sueldoMax < persona [i].suePersona)
            {
                sueldoMax = persona [i].suePersona;
            }
        }
    }

    for (int i=0; i< contador; i++)
    {
        if (i==0)
        {
            joven = persona [i].edadPersona;
        }
        else
        {
            if (joven > persona [i].edadPersona)
            {
                joven = persona [i].edadPersona;
            }
        }
    }

    for (int i=0; i< contador; i++)
    {
        edadPromedio = suma + persona [i].edadPersona;

    }


    cout << "------------------------------------------\n";
    cout << "El sueldo minimo es: " << sueldoMe;
    cout << "\n";
    cout << "El sueldo maximo es: " << sueldoMax;
    cout << "\n";
    cout << "La edad de la persona mas joven es: " <<joven;
    cout << "\n";
    cout << "La edad promedio es: " << edadPromedio/contador;
} 


