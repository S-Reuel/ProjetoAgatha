/*tela inicial do jogo. Será uma mistura de vermelho e roxo, com o nome grande e no centro da tela e instruções
básicas para começar.*/
#ifndef TELA_INICIAL
#define TELA_INICIAL
#define cor_nome 4
#define nome 7
#define nome2 12
#include "txtBack.cpp"
#include "mensagem.cpp"
#include <stdio.h>
#include <conio.h>
#include <windows.h>

void nome_do_jogo(){	//imprimir killware.exe
	for(int a=2; a<=54; a++){		//linha 2
		if(a==3 || a==4 || a==6 || a==8 ||  a==10 || a==11 || a==12 || a==14 || a==15 || a==16 ||
		a==18 || a==19 || a==20 || a==21 || a==22 || a==24 || a==25 || a==26 || a==28 || a==29 ||
		a==30 || a==35 || a==39 || a==40 || a==41 || a==45 || a==47 || a==48 || a==49 || a==51) continue;
		textbackground(4); gotoxy(a+nome2,nome); printf(" ");
	}
		
	for(int c=2; c<=52; c++){		//linha 3
		if(c==3 || c==5 || c==6 || c==8 || c==10 || c==11 || c==12 || c==14 || c==15 || c==16 ||
		c==18 || c==19 || c==20 || c==21 || c==22 || c==24 || c==25 || c==27 || c==29 || c==30 ||
		c==32 || c==33 || c==35 || c==37 || c==38 || c==39 || c==40 || c==41 || c==43 || c==44 ||
		c==45 || c==46 || c==48 || c==50 || c==51) continue;
		textbackground(4); gotoxy(c+nome2,nome+1); printf(" ");
	}
	
	for(int d=2; d<=53; d++){		//linha 4
		if(d==4 || d==5 || d==6 || d==8 || d==10 || d==11 || d==12 || d==14 || d==15 || d==16 ||
		d==18 || d==19 || d==21 || d==22 || d==24 || d==26 || d==27 || d==28 || d==30 || d==35 ||
		d==38 || d==39 || d==40 || d==41 || d==44 || d==45 || d==46 || d==47 || d==49 || d==50 || d==51) continue;
		textbackground(4); gotoxy(d+nome2,nome+2); printf(" ");
	}
	
	for(int e=2; e<=52; e++){		//linha 5
		if(e==3 || e==5 || e==6 || e==8 || e==10 || e==11 || e==12 || e==14 || e==15 || e==16 ||
		e==18 || e==20 || e==22 || e==24 || e==30 || e==32 || e==34 || e==35 || e==37 || e==38 ||
		e==39 || e==40 || e==41 || e==43 || e==44 || e==45 || e==46 || e==48 || e==50 || e==51) continue;
		textbackground(4); gotoxy(e+nome2,nome+3); printf(" ");
	}
	
	for(int f=2; f<=54; f++){		//linha 6
		if(f==3 || f==4 || f==6 || f==8 || f==12 || f==16 || f==17 || f==19 || f==20 || f==21 ||
		f==23 || f==24 || f==26 || f==27 || f==28 || f==30 || f==32 || f==35 || f==39 || f==41 ||
		f==45 || f==47 || f==48 || f==49 || f==51) continue;
		textbackground(4); gotoxy(f+nome2,nome+4); printf(" ");
	}
	textbackground(0); textcolor(15); gotoxy(27,14), printf("Pressione 'e' para começar");
	while(getch()!='e'){
		
	}
}


void tela_inicial(){
	nome_do_jogo();
	system("cls");
//	cenario_tela_inicial();
	
	system("color 0");
	for(int a=20; a<=60; a++){	//linha de cima; a-coluna
		gotoxy(a,3);
		printf("_");
	}
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

	textcolor(15); system("color 0");
	gotoxy(32,6); printf("Instruções do jogo");
	gotoxy(28,8); printf("Pressione 'e' para entrar");
	gotoxy(32,9); printf("e continuar falas.");
	gotoxy(27,10); printf("Utilize somente as letras do");
	gotoxy(26,11); printf("teclado - elas são suas armas.");
	gotoxy(25,12); printf("Quando se começa uma fase, não é");
	gotoxy(27,13); printf("possível sair dela até falhar");
	gotoxy(36,14); printf("ou passar.");
	gotoxy(30,16); printf("Bom jogo e boa sorte!");
	gotoxy(28,18); printf("Pressione 'e' para começar");
	gotoxy(1,25); textcolor(0);
	
	while(getch()!='e'){		//loop; quando pressiona 'e', vai para cutscene
	}
}

#endif

