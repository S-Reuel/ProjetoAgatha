#ifndef CREDITOS
#define CREDITOS
#define cor_nome 4
#define nome 7
#define nome2 12

#include "txtBack.cpp"
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>


void creditos(){	//imprimir killware.exe
	textcolor(cor_nome);
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
		gotoxy(c+nome2,nome+1); printf(" ");
	}
	
	for(int d=2; d<=53; d++){		//linha 4
		if(d==4 || d==5 || d==6 || d==8 || d==10 || d==11 || d==12 || d==14 || d==15 || d==16 ||
		d==18 || d==19 || d==21 || d==22 || d==24 || d==26 || d==27 || d==28 || d==30 || d==35 ||
		d==38 || d==39 || d==40 || d==41 || d==44 || d==45 || d==46 || d==47 || d==49 || d==50 || d==51) continue;
		gotoxy(d+nome2,nome+2); printf(" ");
	}
	
	for(int e=2; e<=52; e++){		//linha 5
		if(e==3 || e==5 || e==6 || e==8 || e==10 || e==11 || e==12 || e==14 || e==15 || e==16 ||
		e==18 || e==20 || e==22 || e==24 || e==30 || e==32 || e==34 || e==35 || e==37 || e==38 ||
		e==39 || e==40 || e==41 || e==43 || e==44 || e==45 || e==46 || e==48 || e==50 || e==51) continue;
		gotoxy(e+nome2,nome+3); printf(" ");
	}
	
	for(int f=2; f<=54; f++){		//linha 6
		if(f==3 || f==4 || f==6 || f==8 || f==12 || f==16 || f==17 || f==19 || f==20 || f==21 ||
		f==23 || f==24 || f==26 || f==27 || f==28 || f==30 || f==32 || f==35 || f==39 || f==41 ||
		f==45 || f==47 || f==48 || f==49 || f==51) continue;
		gotoxy(f+nome2,nome+4); printf(" ");
	}
	
		system("color 0"); textcolor(15); gotoxy(10,14);
	char texto[]="Criadoras e programadoras: Agatha Pollini de Abreu, Anna Odagawa Utida,Gabriela Angélico Sant'Anna  História: Agatha Pollini de Abreu, Gabriela Angélico Sant'Anna Código: Parte principal, Fase 1 - Anna Fase 2 - Gabriela Fase 3 - Agatha Menções especiais: Silas Reuel (INI-3B), Prof. José Vieira Júnior";
	gotoxy(8,14);
	for(int i=0;i<=70;i++){
		printf("%c", texto[i]);
		Sleep(10);
	}
	gotoxy(8,15);
	for(int i=71;i<=99;i++){
		printf("%c", texto[i]);
		Sleep(10);
	}
	gotoxy(8,17);
	for(int i=100;i<=162;i++){    //historia
		printf("%c", texto[i]);
		Sleep(10);
	}
	gotoxy(8,19);
		for(int i=163;i<=201;i++){   //codigo anna
		printf("%c", texto[i]);
		Sleep(10);
	}
	gotoxy(16,20);
		for(int i=202;i<=218;i++){   //codigo bagi
		printf("%c", texto[i]);
		Sleep(10);
	}
	gotoxy(15,21);
		for(int i=219;i<=235;i++){   //codigo taga
		printf("%c", texto[i]);
		Sleep(10);
	}
	gotoxy(8,22);
	for(int i=236;i<=301;i++){
		printf("%c", texto[i]);
		Sleep(10);
	}
		
	gotoxy(25,24); printf("Agradeçemos por jogar!!! ");
	gotoxy(25,25); printf("Pressione 'e' para fechar");
	textcolor(0);
}

#endif

