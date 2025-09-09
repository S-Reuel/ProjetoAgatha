#ifndef MENSAGEM
#define MENSAGEM

#include "txtBack.cpp"
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

//FUNÇÕES PARA FUNCIONAR textcolor e gotoxy... conio.h NÃO TÊM ESSAS FUNÇÕES
void textcolor (int color)
{
    static int __BACKGROUND;

    HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;


    GetConsoleScreenBufferInfo(h, &csbiInfo);

    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),
                             color + (__BACKGROUND << 4));
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//FIM DA DECLARAÇÃO DAS FUNÇÕES

void motivacional(){
	int mot = rand()%5+1;
	if(mot==1){
		gotoxy(33,12); printf("Missão cumprida!");
	}
	else if(mot==2){
		gotoxy(30,12); printf("Sobreviveu! Milagre?");
	}
	else if(mot==3){
		gotoxy(24,12); printf("Uma vitória conquistada com honra!");
	}
	else if(mot==4){
		gotoxy(30,12); printf("Está indo muito bem!");
	}
	else{
		gotoxy(32,12); printf("O topo te espera.");
	}
}

void mensagem_sucesso(){
//	textbackground(0); textcolor(15);
	system("color 0F");
	for(int a=20; a<=60; a++){	//linha de cima; a- coluna
		gotoxy(a,3);
		printf("_");
	}
//	textbackground(0);
	for(int a=20; a<=60; a++){	//linha de baixo
		gotoxy(a,20);
		printf("_");
	}
	for(int b=4; b<=20; b++){	//linha na esquerda; c-linha
		gotoxy(20,b);
		printf("|");
	}
	for(int b=4; b<=20; b++){	//linha na direita
		gotoxy(60,b);
		printf("|");
	}

	textcolor(15);
	gotoxy(25,9); printf("Parabéns! Você passou de fase!");
	motivacional();
	gotoxy(34,15); printf("Pressione 'e'");
	gotoxy(1,25);
//	textbackground(0); textcolor(0);
	while(getch()!='e'){
	
	}
	return;
}

void mensagem_falha(){
//	textbackground(0); textcolor(15);
	system("color 0F");
	for(int a=20; a<=60; a++){	//linha de cima; a- coluna
		gotoxy(a,3);
		printf("_");
	}
//	textbackground(0);
	for(int a=20; a<=60; a++){	//linha de baixo
		gotoxy(a,20);
		printf("_");
	}
	for(int b=4; b<=20; b++){	//linha na esquerda; c-linha
		gotoxy(20,b);
		printf("|");
	}
	for(int b=4; b<=20; b++){	//linha na direita
		gotoxy(60,b);
		printf("|");
	}
//	textcolor(0); textbackground(0);
	for(int c=21; c<=59; c++){	//coluna
		for(int d=4; d<=19; d++){
			gotoxy(c,d); printf(" ");
		}
	}
//	textcolor(15);
	system("color 0F");
	gotoxy(34,9); printf("Você perdeu");
	gotoxy(36,12); printf("JÁ ERA!!!");
	gotoxy(23,15); printf("Pressione 'e' para tentar novamente");
	gotoxy(1,25);
//	textbackground(0); textcolor(0);
	system("color 00");
	while(getch()!='e'){
	
	}
	return;
}

#endif

