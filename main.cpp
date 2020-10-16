/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Tyler C
 *
 * Created on October 16, 2020, 3:46 PM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int mainOption = 0;
    while (mainOption != 3) {
        cout << "Menu " << endl
                << "Ejercicio 1 (1) " << endl
                << "Ejercicio 2 (2) " << endl
                << "Salir (3)" << endl;
        cout << " Ingrese cual opcion deseas" << endl;
        cin >> mainOption;
        switch (mainOption) {
            case 1:
            {
                double result = 0, variableUsuario_A;
                cout << "Ingrese el valor de x: " << endl;
                cin >> variableUsuario_A;
                result = 1 / (1 + exp(-variableUsuario_A));
                cout << "El resultado :" << result << endl;
                break;
            }
            case 2:
            {
                double variableUsuario_B, result = 0;
                cout << "Ingrese el valor de y: " << endl;
                cin >> variableUsuario_B;
                for (int i = 0; i <= variableUsuario_B; i++) {
                    result += (pow(-1, i)) / ((2 * i) + 1);
                }
                result *= 4;
                cout << "El resultado es: " << result << endl;
                break;
            }
        }
    }
    cout << "Programa a finalizado" << endl;
    return 0;
}

