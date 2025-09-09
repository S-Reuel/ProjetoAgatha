//gera e imprime uma letra aleatória
#ifndef LETRA_ALEATORIA
#define LETRA_ALEATORIA
#include "txtBack.cpp"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char letra_aleatoria(){
	const char alfabeto[] = "abcdefghijklmnopqrstuvwxyz"; //cria constante com as opções de letras, 0 a 25
	char letra = alfabeto[rand()%26];
	return letra;
}

#endif

