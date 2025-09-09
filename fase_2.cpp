//fase 2 do jogo - Chuva de letras
#ifndef FASE_2
#define FASE_2

#include "txtBack.cpp"
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#include "letra_aleatoria.cpp"
#include "mensagem.cpp"

char leitura_tecla2(int limite){	// Lê 1 tecla (se tiver) até limite (milissegundos)
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

void instrucoes_fase_2(){
	textbackground(0); textcolor(15);
	for(int a=10; a<=65; a++){	//linha de cima; a- coluna
		gotoxy(a,3);
		printf("_");
	}
	textbackground(0);
	for(int a=10; a<=65; a++){	//linha de baixo
		gotoxy(a,20);
		printf("_");
	}
	for(int b=4; b<=20; b++){	//linha na esquerda; c-linha
		gotoxy(10,b);
		printf("|");
	}
	for(int b=4; b<=20; b++){	//linha na direita
		gotoxy(65,b);
		printf("|");
	}
	gotoxy(28,5); printf("FASE 2.");
	gotoxy(14,7); printf("Seu objetivo é conseguir atirar com o seu teclado,");
	gotoxy(14,8); printf("apertando as letras para derrotar inimigos em");
	gotoxy(14,9); printf("locais específicos.");
	gotoxy(14,11); printf("A linha cinza escura é perfeita, a clara boa.");
	gotoxy(14,12); printf("Na área branca, o vírus não é atingido (-1 hp).");
	gotoxy(14,13); printf("Perde-se 2 hp quando você não atira.");
	gotoxy(14,15); printf("Tiros necessários: 30.");
	gotoxy(14,16); printf("Cinza claro(+1), Cinza escuro(+2).");
	gotoxy(14,17); printf("HP: 10");
	gotoxy(17,19); printf("Pressione 'e' para começar");
	gotoxy(1,25);
	while(getch()!='e'){
	}
}
void cenario_fase2(){
	char pixel0 = ' ';
	textcolor(0); textbackground(15);
	for(int c=2;c<=60;c++){
		for (int d=2;d<=9;d++){
		gotoxy(c,d);
		putchar(pixel0);
		}
		for (int e=13;e<=20;e++){
		gotoxy(c,e);
		putchar(pixel0);
		}
	}
	char pixel1 = ' ';
	textcolor(0); textbackground(7);
	for (int a=2;a<=60;a++){
		gotoxy(a,10);
		putchar(pixel1);
		gotoxy(a,12);
		putchar(pixel1);
	}
	char pixel2 = ' ';
	textcolor(0); textbackground(8);
	for (int b=2;b<=60;b++){
		gotoxy(b,11);
		putchar(pixel2);
	}
	
}
void cenario_fase2renew(int p1){
	char pixel=' ';
	if(p1>=2 && p1<=9){
		for (int a=2;a<=60;a++){
			gotoxy(a,p1); textbackground(15);
			putchar(pixel);
		}
	}
	else if(p1>=13 && p1<=20){
		for (int a=2;a<=60;a++){
			gotoxy(a,p1); textbackground(15);
			putchar(pixel);
		}
	}
	else if(p1==10 || p1==12){
		for (int a=2;a<=60;a++){
			gotoxy(a,p1); textbackground(7);
			putchar(pixel);
		}
	}
	else if(p1==11){
		for (int a=2;a<=60;a++){
			gotoxy(a,p1); textbackground(8);
			putchar(pixel);
		}
	}
}
void fase_2(){
	system("cls");
	instrucoes_fase_2();
	system("cls");
	int hp = 10;
	int pontos = 0;
	cenario_fase2();
	gotoxy(2,21); textbackground(0); textcolor(15); printf("Pontos: %d   \n HP: %d   ", pontos, hp);
	Sleep(1000);
	while(hp>0 && pontos<30){
		int col = rand()%59+2;   //colunas (onde a letra começa a cair)
        char letra1 = letra_aleatoria();
        gotoxy(col,2); textcolor(0); textbackground(15); putchar(letra1);	//coloca letra na tela
        int p=2; int acertou=0;
        for (p=2;p<=20;p++){
			gotoxy(col,p);
			if(p==10 || p==12){
				textbackground(7);
			}
			else if(p==11){
				textbackground(8);
			}
			else textbackground(15);
			printf("%c", letra1);
			char digitado = leitura_tecla2(175);
			gotoxy(col,p);
    		printf(" "); cenario_fase2renew(p);
    		if (p==11 && digitado == letra1){
    			acertou=1;
    			pontos+=2; gotoxy(2,21); textbackground(0); textcolor(15); printf("Pontos: %d   \n HP: %d   ", pontos, hp);
    			gotoxy(5,1); textcolor(15); 
    			printf("Perfeito! (+2 pontos)");
    			Sleep(1000); gotoxy(5,1); printf("                     ");
    			break;
    		}
    		
    		else if ((p==12 || p==10) && digitado == letra1){
    			acertou=1;
    			pontos+=1; gotoxy(2,21); textbackground(0); textcolor(15); printf("Pontos: %d   \n HP: %d   ", pontos, hp);
    			gotoxy(5,1); textcolor(15);
    			printf("Bom! (+1 ponto)");
    			Sleep(1000); gotoxy(5,1); printf("               ");
    			gotoxy(12,p); printf(" "); cenario_fase2renew(p);
    			break;
    		}
    		else if (p<10 && digitado == letra1 ){
    			acertou=1;
    			hp--; gotoxy(2,21); textbackground(0); textcolor(15); printf("Pontos: %d   \n HP: %d   ", pontos, hp);
    			gotoxy(5,1); textcolor(15);
    			printf("Muito cedo! (-1 hp)");
    			Sleep(1000); 
				gotoxy(1,1); gotoxy(1,1); printf("                       ");
    			break;
    		}
    		else if (digitado == letra1 && p>12){
    			acertou=1;
    			hp--; gotoxy(2,21); textbackground(0); textcolor(15); printf("Pontos: %d   \n HP: %d   ", pontos, hp);
    			gotoxy(5,1); textcolor(15); 
    			printf("Muito tarde! (-1 hp)");
    			Sleep(1000); 
				gotoxy(1,1); printf("                        ");
    			break;
    		}
    		else if (digitado != letra1 && digitado != '\0'){
    			acertou=1;
    			hp-=2; gotoxy(2,21); textbackground(0); textcolor(15); printf("Pontos: %d   \n HP: %d   ", pontos, hp);
    			gotoxy(5,1); textcolor(15);
    			printf("Errou! (-2 hp)");
    			Sleep(1000); 
				gotoxy(1,1); printf("                  ");
    			break;
			}
		}
		if (acertou != 1){
    			hp-=2; gotoxy(2,21); textbackground(0); textcolor(15); printf("Pontos: %d   \n HP: %d   ", pontos, hp);
    			gotoxy(5,1); textcolor(15);
    			printf("Perdeu a letra! (-2 hp)");
    			Sleep(1000); 
				gotoxy(1,1); printf("                           ");
    			continue;
			}
	}
    textbackground(0); system("cls");
    if (pontos >= 30){
    	mensagem_sucesso();
    	return;
    }
	else{
        mensagem_falha();
        fase_2();
    }
}

#endif

