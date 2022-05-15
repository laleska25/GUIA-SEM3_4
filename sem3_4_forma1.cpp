#include <iostream>
using namespace std;

int main ()

{
    int m1[10][2] = { {1, 8},{2, 12}, {3, 16}, {4, 20}, {5, 24}, {6, 28}, {7, 32}, {8, 36}, {9, 40}, {10, 44}};
    
    int alto = 10;
    int ancho_m1 = 2;
    
    for (int i = 0; i < alto; i++) 
    
    { 
        for (int j = 0; j < ancho_m1; j++) 
        { 
            cout << m1[i][j]<<" ";
            cout << "\t";
        }
            cout << "\n"; 
    }
}
