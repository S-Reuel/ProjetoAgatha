//primeira fase do jogo. Consiste em um jogo de atirar
#ifndef FASE_1
#define FASE_1
#define cor 7
#define max 30

#include "txtBack.cpp"
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#include "letra_aleatoria.cpp"
#include "mensagem.cpp"

void instrucoes_fase_1(){
	system("color 0"); textcolor(15);
	for(int a=20; a<=60; a++){	//linha de cima; a- coluna
		gotoxy(a,3);
		printf("_");
	}
	system("color 0");
	for(int a=20; a<=60; a++){	//linha de baixo
		gotoxy(a,20);
		printf("_");
	}
	for(int b=4; b<=20; b++){	//linha na esquerda; b-linha
		gotoxy(20,b);
		printf("|");
	}
	for(int b=4; b<=20; b++){	//linha na direita
		gotoxy(60,b);
		printf("|");
	}
	gotoxy(38,5); printf("FASE 1.");
	gotoxy(24,7); printf("Seu objetivo é atirar nos ");
	gotoxy(24,8); printf("inimigos utilizando o seu teclado.");
	gotoxy(24,9); printf("As letras aparecerão em");
	gotoxy(24,10); printf("lugares aleatórios.");
	gotoxy(24,12); printf("Quando erra ou demora demais,");
	gotoxy(24,13); printf("perde-se 1 HP (vida).");
	gotoxy(24,14); printf("Quando acerta, ganha 1 ponto.");
	gotoxy(24,16); printf("Objetivo (pontos): 30");
	gotoxy(24,17); printf("HP: 5");
	gotoxy(27,19); printf("Pressione 'e' para começar");
	gotoxy(1,25);
	while(getch()!='e'){

	}
}

void cenario_fase_1(){				//gerar cenário inicial (quadrado)
	textcolor(cor); system("color 7");
	for(int a=9; a<=69; a++){			//colunas
		for(int b=2; b<=15; b++){		//linhas
			gotoxy(a,b); printf(" ");
		}
	}
}

char leitura_tecla(int limite){	// Lê 1 tecla (se tiver) até limite (milissegundos)
    int elapsed = 0;
    while (kbhit()) getch();	//kbhit - verifica se tem teclas pressionadas esperando no buffer de entrada; getch() - lê caractere do buffer; "limpam" o buffer;
    while (elapsed < limite){
        if (kbhit()){
            int letra = getch();
            if (letra >= 'A' && letra <= 'Z') letra += 32;  //torna minúscula; código ASCII
            return (char)letra;	//retorna a letra inserida
        }
        Sleep(10);
        elapsed += 10;	//adiciona 10 ao contador para tempo
    }
    return '\0';	//retorna vazio
}

void fase_1(){
	system("cls");
	instrucoes_fase_1();
	system("cls");
    int pontos = 0;		//inicia com 0 pontos
    int hp = 5;			//inicia com 5 vidas
    cenario_fase_1();
    gotoxy(10,17); system("color 0"); textcolor(15); printf("Pontos: %d", pontos); gotoxy(10,18); printf("HP: %d", hp);
    Sleep(1000);

    while (pontos < max && hp > 0){
        int c = rand()%59+10;				//gera número aleatório de 10 a 68 (colunas)
		int d = rand()%12+3;				//gera número aleatório de 3 a 14 (linhas)
        char letra1 = letra_aleatoria();
        gotoxy(c,d); textcolor(0); system("color 7");; putchar(letra1);	//coloca letra na tela
        char digitado = leitura_tecla(1000);
        if (digitado == letra1){	//soma 1 ponto quando jogador acerta
            pontos++;
            gotoxy(30,17); system("color 0"); textcolor(10); printf("Acertou (+1)"); Sleep(500); gotoxy(30,17); printf("                               ");
        }
		else{		//subtrai 1 vida (hp) quando erra ou perde a letra
            hp--;
            gotoxy(30,17); system("color 0"); textcolor(4); printf("Errou (-1)"); Sleep(500); gotoxy(30,17); printf("                               ");
        }
        gotoxy(c,d); textcolor(cor); system("color 7"); printf(" ");	//apagar letra
        
        gotoxy(10,17); system("color 0"); textcolor(15); printf("Pontos: %d", pontos); gotoxy(10,18); printf("HP: %d", hp);	//atualizar
    }

    system("cls");
    if (pontos >= max){
    	mensagem_sucesso();
    	return;
    }
	else{
        mensagem_falha();
        fase_1();
    }
}

#endif

