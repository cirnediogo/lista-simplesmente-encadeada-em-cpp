/* 
 * File:   LSE.cpp
 * Author: Kozovits
 * 
 * Created on 16 de Setembro de 2009, 15:46
 */

#include "LSE.h"

/**
 * Construtor da classe ...
 */
LSE::LSE() {
    length = 0;
    AIL = new NoLSE;
    (*AIL).prox = NULL;
    // AIL->prox = NULL;
    cout << "chamou construtor \n";
}



LSE::~LSE() {
    cout << "chamou destrutor \n";
    delete AIL;
}










void LSE::buscaOrd(Chave x, NoLSE *&ante, NoLSE *&pont){
    NoLSE *ptr = AIL->prox;
    ante = AIL;
    pont = NULL;
    while (ptr != NULL){
        if (ptr->chave < x){
            ante = ptr;
            ptr = ptr->prox;
        }else{
            if (ptr->chave == x){
                pont = ptr;// achou o elemento procurado
            }
            ptr = NULL;// força saida do loop
        }
    }

}











void LSE::insereOrd(Chave x, Informacao novoValor){
    NoLSE* pt=NULL;
    NoLSE* ante=NULL;
    NoLSE *pont=NULL;
    buscaOrd(x, ante, pont);
    if (pont == NULL){
        pt = new NoLSE;
        pt->chave = x;
        pt->id = novoValor;
        pt->prox = ante->prox;
        ante->prox = pt;
    } else {
        cout << "chave " << x << " ja na lista encadeada\n";
    }
}



