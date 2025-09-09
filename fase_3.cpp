#include <stdio.h>
#include <conio.h >
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "mensagem.cpp"
#define meta 15
#define limite 30
#define hp 10


const char *sorteio (const char *a, const char *b, const char *c, const char *d, const char *e, const char *f, const char *g, const char *h, const char *i, const char *j, const char *k, const char *l, const char *m, const char *n, const char *o){
	const char *palavras[]= {a, b, c, d, e, f, g, h, i, j, k, l, m, n, o,}; //cria uma lista de palavras
	int x = rand()%15; 
	const char *palavra_sort=palavras[x]; //define que o número sorteado corresponde a um dos índices, ou seja, uma das palavras da lista
	return palavra_sort; //devolve a palavra sorteada
}

bool end = 0;

void instrucoes_fase_3(){
	textbackground(0); textcolor(15);
	for(int a=20; a<=60; a++){	//linha de cima; a- coluna
		gotoxy(a,3);
		printf("_");
	}
	textbackground(0);
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
	gotoxy(38,5); printf("FASE 3.");
	gotoxy(24,7); printf("Seu objetivo é derrotar ");
	gotoxy(24,8); printf("inimigos digitando palavras.");
	gotoxy(24,9); printf("As palavras aparecerão em");
	gotoxy(24,10); printf("lugares aleatórios.");
	gotoxy(24,12); printf("Você precisa digitar 15");
	gotoxy(24,13); printf("palavras corretamente em");
	gotoxy(24,14); printf("30 segundos.");
	gotoxy(24,16); printf("Quando acerta, ganha 1 ponto.");
	gotoxy(24,17); printf("Se o tempo acabar, você perde");
	gotoxy(27,19); printf("Pressione 'e' para começar");
	gotoxy(1,25);
	while(getch()!='e'){

	}
}

void fase_3(){
	instrucoes_fase_3();
	system("cls");
	srand(time(NULL));
	int hpu = hp; //hp de usuário
	int td = 3;// isso é tempo decorrido ( td = time(NULL) - tempo )
	int pontos = 0; //pontuação começa em 0
	int cont = 0; //contador de coordenada
	time_t tempo;
	while(pontos<meta && end == 0){ //enquanto a pontuação não for o suficiente
			tempo = 0;
			time_t start = time(NULL);
			pontos = 0;
		while (end == 0 && pontos<meta){ //enquanto o tempo não tiver chegado ao fim, o jogador pode continuar tentando
			printf("Tempo: %d", limite - tempo);
			printf(" HP: %d", hpu);
			printf("\nPontos: %d", pontos);
			if(tempo >= td){
				hpu = hpu - 1;
				td = td + 3;
			}
			int sorteio_lista = rand()%3; //vai sortear uma das listas
			int x = rand()%59+10; //sorteia uma coluna entre 10 e 68 para a palavra
			int y = rand()%12+3; //sorteia uma linha entre 3 e 14
			
			if(sorteio_lista == 0){ //se o valor sorteado for 0, a lista escolhida será essa
				const char *pal = sorteio("gelo", "mesa", "mola", "olho", "amor", "fato", "mito", "como", "vida", "sede", "pois", "casa", "mais", "pela", "moto"); //uma dessas palavras será sorteada
				gotoxy(x,y); //vai para a coordenada escolhida para a palavra
				printf("%s", pal); //mostra a palavra para o jogador
				for(int i=0; i<4; i++){ //o processo se repetirá para cada letra da palavra
					tempo = time(NULL) - start;
					gotoxy(7,0);
					printf("%d ", limite - tempo);
					gotoxy(8,1);
					printf("%d ", pontos);
					if(tempo >= limite){
						end = 1;
						continue;
					}
					while(getch()!=pal[i] && end == 0){ //enquanto a letra digitada não for igual à letra contida no índice que o i está
						//ignora até a letra ser igual
						
					}
					gotoxy(x+cont,y); //a partir da segunda letra, o contador irá ajudar a levar a coordenada para a coluna seguinte para pintar quando o jogador acertar
					textcolor(2); printf("%c", pal[i]); //a letra é pintada de verde quando for digitada corretamente
					cont++; //o contador é atualizado para poder pintar a letra seguinte depois
					textcolor(15); //ajuste de cor
				}
				system("cls"); //ajuste para a mudança de cor funcionar
				cont = 0; //o contador de coordenada é zerado para a próxima palavra
			}
			
			else if(sorteio_lista == 1){
				const char *pal = sorteio("floresta", "resposta", "biscoito", "vermelho", "borracha", "genocida", "respeito", "inerente", "peculiar", "pandemia", "premissa", "conceito", "ardiloso", "devaneio", "relativo");
				gotoxy(x,y);
				printf("%s", pal);
				for(int i=0; i<8; i++){
					tempo = time(NULL) - start;
					gotoxy(7,0);
					printf("%d ", limite - tempo);
					gotoxy(8,1);
					printf("%d ", pontos);
					if(tempo > limite){
						end = 1;
						continue;
					}
					while(getch()!=pal[i] && end==0){
						
					}
					gotoxy(x+cont,y);
					textcolor(2); printf("%c", pal[i]);
					cont++;
					textcolor(15);
				}
				system("cls");
				cont = 0;
			}
			else{
				const char *pal = sorteio("altar", "mexer", "termo", "nosso", "sagaz", "nobre", "muito", "manto", "vigor", "poder", "sutil", "fosse", "ideia", "moral", "inato");
				gotoxy(x,y);
				printf("%s", pal);
				for(int i=0; i<5; i++){
					tempo = time(NULL) - start;
					gotoxy(7,0);
					printf("%d ", limite - tempo);
					gotoxy(8,1);
					printf("%d ", pontos);
					if(tempo >= limite){
						end = 1;
						continue;
					}
					while(getch()!=pal[i] && end==0){
						
					}
					gotoxy(x+cont,y);
					textcolor(2); printf("%c", pal[i]);
					cont++;
					textcolor(15);
				}
				system("cls");
				cont = 0;
			}
			if(!end){
				pontos++; //quando a palavra escolhida for concluída, os pontos são adicionados e o código se repete até atingir a pontuação necessária
			}
		}	
			if(end){
				hpu = 0;
				printf("\nHP: %d\nTempo: %d\nPontos: %d", hpu, ((limite - tempo)<0) ? 0 : limite - tempo, pontos);
			}
			if(pontos==meta){
				mensagem_sucesso();
			}
			else{
				mensagem_falha();
				system("cls");
				fase_3();
			}
//			continue;
	}
	end = 0;
	pontos = 0;
	return;
}

