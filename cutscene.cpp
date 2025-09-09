#ifndef CUTSCENE
#define CUTSCENE

#include "txtBack.cpp"
#define tfala 20
#include <conio.h>
#include <windows.h>

void quadrado(){		//caixa de texto/falas
	for(int a=4; a<=70; a++){	//linha de cima; a- coluna
		gotoxy(a,17);
		printf("_");
	}
	system("color 0");
	for(int a=4; a<=70; a++){	//linha de baixo
		gotoxy(a,24);
		printf("_");
	}
	for(int b=18; b<=24; b++){	//linha na esquerda; b-linha
		gotoxy(4,b);
		printf("|");
	}
	for(int b=18; b<=24; b++){	//linha na direita
		gotoxy(70,b);
		printf("|");
	}
}

void cutscene_1(){
	textcolor(15);
	quadrado();
	
	//narrador (1)
	gotoxy(6,17); printf("NARRADOR");
	char fala_1[]= "A cidade de Byteville foi recentemente infectada por um malware chamado Worms. Várias partes do local estão sendo destruídas e o terror já se tornou parte do dia a dia de todos os componentes... trabalhadores de Byteville. A agência antivírus local, Avast, se responsabilizou por finalizar a ameaça, enviando seus empregados para lutar contra os monstros que vem se auto replicando num ritmo alarmante.";
	gotoxy(6,19);
	for(int a=0; a<=62; a++){
		printf("%c", fala_1[a]);
		Sleep(tfala);
	}
	gotoxy(5,20);
	for(int a=63; a<=126; a++){
		printf("%c", fala_1[a]);
		Sleep(tfala);
	}
	gotoxy(6,21);
	for(int a=127; a<=190; a++){
		printf("%c", fala_1[a]);
		Sleep(tfala);
	}
	gotoxy(5,22);
	for(int a=191; a<=222; a++){
		printf("%c", fala_1[a]);
		Sleep(tfala);
	}
	while(getch()!='e'){
		
	}
	system("cls"); quadrado();
	
	gotoxy(6,17); printf("NARRADOR");
	gotoxy(6,19);
	for(int a=223; a<=279; a++){
		printf("%c", fala_1[a]);
		Sleep(tfala);
	}
	gotoxy(6,20);
	for(int a=280; a<=342; a++){
		printf("%c", fala_1[a]);
		Sleep(tfala);
	}
	gotoxy(6,21);
	for(int a=343; a<=402; a++){
		printf("%c", fala_1[a]);
		Sleep(tfala);
	}
	while(getch()!='e'){
		
	}
	system("cls"); quadrado();
	
	//fala do chefe (2)
	gotoxy(6,17); printf("CHEFE");
	char fala_2[] = "Sally (você), você ficará encarregado pelo bairro kernel.";
	gotoxy(6,19);
	for(int b=0; b<=57; b++){
		printf("%c", fala_2[b]);
		Sleep(tfala);
	}
	while(getch()!='e'){
		
	}
	system("cls"); quadrado();
	
	//fala do/a Sally (3)
	gotoxy(6,17); printf("SALLY (VOCÊ)");
	char fala_3[] = "Mas, chefe, esse é o núcleo da cidade. O vírus já deve estar totalmente enraizado nesse bairro!";
	gotoxy(6,19);
	for(int c=0; c<=60; c++){
		printf("%c", fala_3[c]);
		Sleep(tfala);
	}
	gotoxy(6,20);
	for(int c=61; c<=95; c++){
		printf("%c", fala_3[c]);
		Sleep(tfala);
	}
	
	while(getch()!='e'){
		
	}
	system("cls"); quadrado();
	
	//segunda fala do chefe (4)
	gotoxy(6,17); printf("CHEFE");
	char fala_4[] = "*suspiro* Eu sei que não é o ideal, mas todos os outros trabalhadores já estão nas outras áreas da cidade. Te desejo sorte.";
	gotoxy(6,19);
	for(int d=0; d<=55; d++){
		printf("%c", fala_4[d]);
		Sleep(tfala);
	}
	gotoxy(6,20);
	for(int d=56; d<=116; d++){
		printf("%c", fala_4[d]);
		Sleep(tfala);
	}
	gotoxy(6,21);
	for(int d=117; d<=123; d++){
		printf("%c", fala_4[d]);
		Sleep(tfala);
	}
	while(getch()!='e'){
		
	}
	system("cls"); quadrado();
	
	//segunda fala do/a Sally (5)
	gotoxy(6,17); printf("SALLY (VOCÊ)");
	char fala_5[] = "Tá, tá! Se é isso que precisa ser feito...";
	gotoxy(6,19);
	for(int e=0; e<=42; e++){
		printf("%c", fala_5[e]);
		Sleep(tfala);
	}
	while(getch()!='e'){
		
	}
}

void cutscene_2(){
	textcolor(15);
	quadrado();
	
	//fala do/a Sally (6)
	gotoxy(6,17); printf("SALLY (VOCÊ)");
	char fala_6[] = "Finalmente terminei! Acho melhor explorar um pouco mais para ver o que consigo fazer pela cidade. E seria bom se eu encontrasse os Worms.";
	gotoxy(6,19);
	for(int f=0; f<=60; f++){
		printf("%c", fala_6[f]);
		Sleep(tfala);
	}
	gotoxy(6,20);
	for(int f=61; f<=97; f++){
		printf("%c", fala_6[f]);
		Sleep(tfala);
	}
	while(getch()!='e'){
		
	}
	system("cls"); quadrado();
	
	gotoxy(6,17); printf("SALLY (VOCÊ)");
	gotoxy(6,19);
	for(int f=98; f<=137; f++){
		printf("%c", fala_6[f]);
		Sleep(tfala);
	}
	while(getch()!='e'){
		
	}
}

void cutscene_3(){
	textcolor(15);
	quadrado();
	
	//fala do/a Sally (7)
	gotoxy(6,17); printf("SALLY (VOCÊ)");
	char fala_7[] = "Nossa, que lugar assustador... Pelo jeito os Worms estão aqui. Pode ser uma batalha muito difícil. Bem, de qualquer jeito preciso fazer meu trabalho.";
	gotoxy(6,19);
	for(int g=0; g<=61; g++){
		printf("%c", fala_7[g]);
		Sleep(tfala);
	}
	gotoxy(6,20);
	for(int g=63; g<=97; g++){
		printf("%c", fala_7[g]);
		Sleep(tfala);
	}
	while(getch()!='e'){
		
	}
	system("cls"); quadrado();
	
	gotoxy(6,17); printf("SALLY (VOCÊ)");
	gotoxy(6,19);
	for(int g=98; g<=149; g++){
		printf("%c", fala_7[g]);
		Sleep(tfala);
	}
	while(getch()!='e'){
		
	}
}

void cutscene_4(){
	system("cls");
	textcolor(15);
	quadrado();
	
	//fala do/a Sally
	gotoxy(6,17); printf("SALLY (VOCÊ)");
	char fala_8[] = "Consegui! Finalmente vou limpar os arquivos e salvar todos desse malware!";
	gotoxy(6,19);
	for(int h=0; h<=63; h++){
		printf("%c", fala_8[h]);
		Sleep(tfala);
	}
	gotoxy(6,20);
	for(int h=65; h<=72; h++){
		printf("%c", fala_8[h]);
		Sleep(tfala);
	}
	while(getch()!='e'){
		
	}
	
	//mensagem final ao usuário
	system("cls"); textcolor(15);
	for(int a=20; a<=60; a++){	//linha de cima; a- coluna
		gotoxy(a,3);
		printf("_");
	}
	system("color 0");
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
	gotoxy(31,8); printf("Parabéns, jogador!");
	gotoxy(27,11); printf("Você derrotou os inimigos e");
	gotoxy(30,13); printf("conquistou a vitória.");
	gotoxy(22,16); printf("Boa sorte nas suas próximas batalhas!");
	gotoxy(39,17); printf(":3");
	while(getch()!='e'){
	
	}
}

#endif

