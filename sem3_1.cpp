#include <iostream>
using namespace std;

int main ()
{
    int i;
    double suma;
    double termino;
    int a=2;
    int b=3;


    suma = 0;
     
    for (i=1; i<=50; i++)
    {   
        if (i==1)
        {
            cout << "Valor del termino (0): " << a << " / " << b ;
            cout << "\n";
        }  
        
        a = a+3;
        b = b+4;
        
        cout << "Valor del termino ("<<i<<"): ";
        cout <<a <<" / "<<b<<"  "; 
        cout << "\n";

        termino = (a % b );
        suma = suma + termino;
    }

        cout << "\n***********************************\n";
        cout << "El valor de la suma es: " << suma;

}  
