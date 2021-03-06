// arquivo de header (.h) contém apenas definições de structs e funções

// include guardians
#ifndef _INT_VECTOR_H_
#define _INT_VECTOR_H_

#include <stdio.h>
#include <stdlib.h>

// é como se tudo fosse private
typedef struct _int_vector IntVector;  // nós estamos encapsulando a struct IntVector

// cria um vetor de inteiros com `size` elementos
IntVector *createIntVector(int size);

void printIntVector(const IntVector *v);

// retorna o elemento do índice [i]
// caso o índice seja inválido, saia do programa (exception)
int atIntVector(const IntVector *v, int i);

#endif