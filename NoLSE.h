/* 
 * File:   NoLSE.h
 * Author: Kozovits
 *
 * Created on 16 de Setembro de 2009, 15:36
 */

#ifndef _NOLSE_H
#define	_NOLSE_H

#include "Informacao.h"
#include "Chave.h"

typedef struct NoLSE {
    Informacao id;
    Chave chave;
    NoLSE *prox;
} NoLSE;

#endif	/* _NOLSE_H */

