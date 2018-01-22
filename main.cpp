/* 
 * File:   main.cpp
 * Author: Kozovits
 *
 * Created on 16 de Setembro de 2009, 15:31
 */

#include <stdlib.h>

#include <iostream>
#include "LSE.h"

using namespace std;

/**
 *  Ponto de entrada do programa que
 */
int main(int argc, char** argv) {
    cout << "Boa tarde turma" << endl;
    LSE minhaLista;
    minhaLista.insereOrd(3, 300);
    minhaLista.insereOrd(4, 400);
    return (EXIT_SUCCESS);
}

/*
    long qte = 100000000L;
    string *soma = new string[qte];
    if (soma == NULL) {
        cout << "NULO";
    } else {
        *soma = "123";
        string * &x = soma;
        cout << *x;
        delete [ ] soma;
    }
*/

