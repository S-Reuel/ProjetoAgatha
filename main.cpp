#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

#include "txtBack.cpp"
#include "tela_inicial.cpp"
#include "fase_1.cpp"
#include "fase_2.cpp"
#include "fase_3.cpp"
#include "cutscene.cpp"
#include "creditos.cpp"

main(){
	(setlocale(LC_ALL, "Portuguese"));
	srand(time(NULL));
	tela_inicial();
	textcolor(0); system("color 0"); system("cls");
	cutscene_1();
	textcolor(0); system("color 0"); system("cls");
	fase_1();
	system("cls");
	cutscene_2();
	system("cls");
	fase_2();
	system("cls");
	cutscene_3();
	system("cls");
	fase_3();
	system("cls");
	cutscene_4();
	system("cls");
	creditos();
}


