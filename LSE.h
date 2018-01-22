/* 
 * File:   LSE.h
 * Author: Kozovits
 *
 * Created on 16 de Setembro de 2009, 15:46
 */

#ifndef _LSE_H
#define	_LSE_H
#include "NoLSE.h"


class LSE {
public:
    LSE();
    virtual ~LSE();
    void buscaOrd(Chave x, NoLSE *&ante, NoLSE *&pont);
    void insereOrd(Chave x, Informacao novoValor);
    void imprime();
private:
    int length;
    NoLSE * AIL;
};

#endif	/* _LSE_H */

