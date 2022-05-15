/*Guia de Problemas teoria - parte 2 */
#include <iostream>
using namespace std;

int cantidadP1, cantidadP2, cantidadP3, descuentoP1, descuentoP2, descuentoP3;
int totalP1, totalP2, totalP3;
// ¿Las variables que tengo dentro del metodo son GLOBALES?
// si es No - hay que declarar las variables como un parametro
// Las variables de salida reemplazar por RETURN

void efectuarIncrementos (string codigo, int cantidad, float ip, float descuento)
{
    if (codigo == "P1" || codigo == "p1")
    {
        cantidadP1+= cantidad;
        totalP1 += ip;
        descuentoP1 += descuento;
    }

    else if (codigo == "P2" || codigo == "p2")
    {
        cantidadP2 += cantidad;
        totalP2 += ip;
        descuentoP2 += descuento;
    }

    else if (codigo == "P3" || codigo == "p3")
    {
        cantidadP3 += cantidad;
        totalP3 += ip;
        descuentoP3 += descuento;
    }
}

float importeDeLacompra (string codigo, int cantidad)
{
    if (codigo == "p1" || codigo == "P1")
    {
        return 15.0 * cantidad;
    }

    else if (codigo == "p2" || codigo == "P2")
    {
        return 17.5 * cantidad;
    }

    else if (codigo == "p3" || codigo == "P3")
    {
        return 20.0 * cantidad;
    }
    else 
    {
        cout << "Ingrese un producto P1 -P2- P3";
    }
}

float importeDelDescuento (int cantidad, float importe_compra)
{
    if (cantidad > 10 )
    {
        return 0.15 * importe_compra;
    }

    else 
    {
        return 0.07 * importe_compra;
    }  
}

float importeApagar (float importe_compra, float importe_descuento)
{
    return  importe_descuento - importe_compra;
} 

void imprimirResultados (float importe_compra, float importe_pagar, float importe_descuento)
{
    cout << "Importe de compra es: "<< importe_compra << endl;
    cout << "Importe del descuento es: " << importe_descuento << endl;
    cout << "Importe a pagar es: " << importe_pagar << endl;
} 

void reporteResultados ()
{
    cout << "La cantidad de P1 es: "<< cantidadP1 << "\n";
    cout << "La cantidad de P2 es: "<< cantidadP2 << "\n";
    cout << "La cantidad de P3 es: "<< cantidadP3 << "\n";
    cout << "La cantidad total a pagar de P1 es: "<< totalP1 << "\n";
    cout << "La cantidad total a pagar de P2 es: "<< totalP2 << "\n";
    cout << "La cantidad total a pagar de P3 es: "<< totalP3 << "\n";
    cout << "La cantidad de descuento P1 es: "<< descuentoP1 << "\n";
    cout << "La cantidad de descuento P2 es: "<< descuentoP2 << "\n";
    cout << "La cantidad de descuento P3 es: "<< descuentoP3 << "\n";
}


int main ()
{
    //Declaracion de variables
    int cantidad;
    string codigo,
           rpta;
    float importe_compra;
    float importe_descuento;
    float importe_pagar;
    float descuento, ip;
    bool bandera = false;

    //Entrada
    do 
    {
    cout << "Ingrese nombre del producto: ";
    cin >> codigo;

    cout << "Ingrese la cantidad de productos adquiridos: ";
    cin >> cantidad;

    //Proceso

    //Calcular el importe de la compra
    importe_compra = importeDeLacompra (codigo, cantidad);

    //Calcular importe de descuento
    importe_descuento = importeDelDescuento (cantidad, importe_compra);

    //Calcular import a pagar
    importe_pagar = importeApagar (importe_descuento, importe_compra);

    //Efectuar incrementos
    efectuarIncrementos (codigo, cantidad, ip, descuento);

    //Salida
    imprimirResultados (importe_compra, importe_pagar, importe_descuento);
    
    //continuar o terminar el programa
    cout << "******************************************\n";
    cout << "Deseas comprar otro producto (SI): ";
    cin >> rpta;
    cout << "******************************************\n";

    if (rpta == "SI" || rpta == "si") 
    {
        bandera = true;
    }

    else 
    {
        bandera = false;
    }
}

while (bandera == true);
reporteResultados ();

cout << "-----------------------------------------------\n";
cout << "$$$$$$$$$$ GRACIAS POR SU COMPRA $$$$$$$$$$\n";
cout << "-----------------------------------------------\n";

}
