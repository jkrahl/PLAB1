// PLAB1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Aleatori.h"

using namespace std;

int main()
{
    int generacions = 0, conill = 0, guineu = 0;
    float creixementConill = 0, mortalitatConill = 0, creixementGuineu = 0, mortalitatGuineu = 0;
    cout << "Benvingut al FoxRabbit! Si us plau, quantes generacions vols estudiar?" << endl;
    cin >> generacions;
    while (generacions <= 0)
    {
        cout << "Introdueix un nombre positiu: quantes generacions vols estudiar?" << endl;
        cin >> generacions;
    }

    cout << "Introdueix el nombre inicial de conills:" << endl;
    cin >> conill;
    while (conill <= 0)
    {
        cout << "Error. Introdueix el nombre inicial de conills:" << endl;
        cin >> conill;
    }

    cout << "Introdueix el nombre inicial de guineus:" << endl;
    cin >> guineu;
    while (guineu <= 0)
    {
        cout << "Error. Introdueix el nombre inicial de guineus:" << endl;
        cin >> guineu;
    }

    cout << "Introdueix el factor de creixement dels conills:" << endl;
    cin >> creixementConill;
    while (creixementConill <= 0)
    {
        cout << "Error. Introdueix el factor de creixement dels conills:" << endl;
        cin >> creixementConill;
    }

    cout << "Introdueix el factor depredador guineu-conill:" << endl;
    cin >> mortalitatConill;
    while (mortalitatConill <= 0)
    {
        cout << "Error. Introdueix el factor depredador guineu-conill:" << endl;
        cin >> mortalitatConill;
    }

    cout << "Introdueix el factor mortalitat de les guineus:" << endl;
    cin >> mortalitatGuineu;
    while (mortalitatGuineu <= 0)
    {
        cout << "Error. Introdueix el factor mortalitat de les guineus:" << endl;
        cin >> mortalitatGuineu;
    }

    cout << "Introdueix el factor de creixement de les guineus:" << endl;
    cin >> creixementGuineu;
    while (creixementGuineu <= 0)
    {
        cout << "Error. Introdueix el factor de creixement de les guineus:" << endl;
        cin >> creixementGuineu;
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
