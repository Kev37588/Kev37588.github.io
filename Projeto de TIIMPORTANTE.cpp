#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main (){
	int p1, p2, p3, p4, p5, r1, certo=0;
	char nome[50];
	
	setlocale (LC_ALL, "Portuguese");
	
	printf ("\n\n");
	printf ("                 ;) BEM VINDO AO QUIZ ALEAT�RIO ;)     ");
	
	printf ("\n\n\n");
	
	printf ("          Vamos come�ar!!! Primeiro, digite seu nome: ");
	scanf ("%s", &nome);
	srand(time(NULL));
	
	p1=rand()%40;
    p2=rand()%40;
	p3=rand()%40;
	p4=rand()%40;
	p5=rand()%40;
	
	while (p2==p1){
		p2=rand()%40;
	}
	while (p1==p3||p2==p3){
		p3=rand()%40;
	}
	while (p1==p4||p2==p4||p3==p4){
		p4=rand()%40;
	}
	while (p1==p5||p2==p5||p3==p5||p4==p5){
		p5=rand()%40;
	}
	
	printf ("\n\n");
	
	printf ("      %s, responda �s seguintes quest�es: %d, %d, %d, %d e %d\n\n\n", nome, p1+1,p2+1,p3+1,p4+1,p5+1);
	
	if(p1==0)
	{
		printf ("1-Qual a capital do Brasil?\n"
		"1-S�o Paulo\n"
		"2-Rio de Janeiro\n"
		"3-Bras�lia\n"
		"4-Minas Gerais\n"
		"R: ");
		scanf ("%d", &r1);
		    while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==1)
	{
		printf ("2-Assinale a alternativa que possui substantivo sobrecomum.\n"
		"1-Crocodilo\n"
		"2-Colega\n"
		"3-Cavalheiro\n"
		"4-Individuo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==2)
	{
		printf ("3-Em que ano foi implementado o plano real?\n"
		"1-1994\n"
		"2-1876\n"
		"3-1990\n"
		"4-1970\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==3)
	{
		printf ("4-Qual artista pintou o teto da capela sistina, no Vaticano?\n"
		"1-Vicente Van Gogh\n"
		"2-Anita Malfatti\n"
		"3-Candido Portinari\n"
		"4-Michelangelo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==4)
	{
		printf ("5-Qual foi o primeiro pa�s a permitir o voto feminino?\n"
		"1-Brasil\n"
		"2-Venezuela\n"
		"3-Nova Zel�ndia\n"
		"4-Fran�a\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==5)
	{
		printf ("6-A tabela peri�dica tem quantos elementos qu�micos?\n"
		"1-118\n"
		"2-200\n"
		"3-110\n"
		"4-54\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==6)
	{
		printf ("7-Qual o menor pa�s do mundo?\n"
		"1-Vaticano\n"
		"2-Monaco\n"
		"3-Nauro\n"
		"4-Alemanha\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==7)
	{
		printf ("8-Em que pa�s nasceu a pintora Frida Kahlo?\n"
		"1-Brasil\n"
		"2-M�xico\n"
		"3-Fran�a\n"
		"4-Portugal\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==8)
	{
		printf ("9-Qual artista pintou o famoso quadro: O GRITO?\n"
		"1-Edvard Munch\n"
		"2-Van Gogh\n"
		"3-Frida Kaloh\n"
		"4-Da vinci\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==9)
	{
		printf ("10-Em que ano o Rio de Janeiro sediou os Jogos Ol�mpicos?\n"
		"1-2016\n"
		"2-2010\n"
		"3-2000\n"
		"4-2023\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==10)
	{
		printf ("11-Qual esporte pratica o ex atleta ingl�s David Backham?\n"
		"1-v�lei\n"
		"2-nata��o\n"
		"3-futebol\n"
		"4-golfe\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==11)
	{
		printf ("12-Qual cidade foi dividida por um muro em 1961 e 1989, derrubado por sua popula��o?\n"
		"1-Cairo, no Egito\n"
		"2-Osasco, no Brasil\n"
		"3-Berlim, na Alemanha\n"
		"4-Mumbai, na �ndia\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==12)
	{
		printf ("13-Quais cidades japonesas foram atingidas pelas bombas at�micas lan�adas pelo EUA no ano de 1945?\n"
		"1-Mumbai e Osasco\n"
		"2-Hiroshima e Nagasaki\n"
		"3-Cairo e Dhaka\n"
		"4-Berlim e Pequim\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==13)
	{
		printf ("14-A frase: Saio da vida para entrar na hist�ria, pertence a qual presidente brasileiro?\n"
		"1-Juscelino Kubitschek\n"
		"2-Get�lio Vargas\n"
		"3-Jo�o Goulart\n"
		"4-J�nio Quadros\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==14)
	{
		printf ("15-A quem pertence a obra de arte: A noite estrelada?\n"
		"1-Leonardo da Vinci\n"
		"2-Pablo Picasso\n"
		"3-Michelangelo Buonarotti\n"
		"4-Vicent Van Gogh\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==15)
	{
		printf ("16-A sele��o brasileira ficou em qual coloca��o na copa do mundo de 2014?\n"
		"1-1� coloca��o\n"
		"2-4� coloca��o\n"
		"3-3� coloca��o\n"
		"4-2� coloca��o\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==16)
	{
		printf ("17-Qual foi a data exata do atentado as torres g�meas nos Estados Unidos?\n"
		"1-11 de Novembro de 2000\n"
		"2-12 de Semtembro de 2001\n"
		"3-11 de Setembro de 2001\n"
		"4-12 de Novembro de 2000\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==17)
	{
		printf ("18-Quem assumiu a presid�ncia antes de Jair Messias Bolsonaro?\n"
		"1-Michel Temer\n"
		"2-Dilma Roussef\n"
		"3-Luis In�cio Lula da Silva\n"
		"4-Fernando Henrique Cardoso\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==18)
	{
		printf ("19-De quem � a famosa frase: Penso, logo existo?\n"
		"1-Plat�o\n"
		"2-Galileu Galilei\n"
		"3-Descartes\n"
		"4-S�crates\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==19)
	{
		printf ("20-Quais os tr�s estados da mat�ria?\n"
		"1-S�lido, L�quido e gasoso\n"
		"2-S�lido, L�quido e Plasma\n"
		"3-S�lido, L�quido e Energia\n"
		"4-L�quido, Gasoso e Plasma\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==20)
	{
		printf ("21-Quais s�o algumas linguagens de programa��o populares?\n"
		"1-Python, C++ e Java\n"
		"2-Ruby, Perl e Lisp\n"
		"3-Swift, Objective-C e Kotlin\n"
		"4-HTML, CSS e JavaScript\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==21)
	{
		printf ("22-Quais s�o os tr�s ramos do governo do Brasil?\n"
		"1-Federal, Estadual e Municipal\n"
		"2-Agricultura, Com�rcio e Defesa\n"
		"3-Transporte, Energia e Comercio\n"
		"4-Executivo, Legislativo e Judici�rio\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==22)
	{
		printf ("23-Quais s�o algumas plataformas populares de midia social?\n"
		"1-Facebook, Twitter e Instagram\n"
		"2-LinkedIn, TikTok e Snapchat\n"
		"3-Pinteres, Reddit e Tumblr\n"
		"4-Youtube, Vimeo e Dailymotion\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==23)
	{
		printf ("24-Quais s�o algumas teorias �ticas famosas na filisofia?\n"
		"1-Utilitarismo, Deontologia e �tica da Virtude\n"
		"2-Relativismo, Subjetivismo e Emotivismo\n"
		"3-Hedonismo, Eudaimonismo e Epcurismo\n"
		"4-Positivismo, Naturalismo e Pragmatismo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==24)
	{
		printf ("25-O que significa hipotenusa?\n"
		"1-A f�mea do Hipop�tamo\n"
		"2-O comprimento de uma circunfer�ncia\n"
		"3-O maior lado de um tri�ngulo ret�ngulo\n"
		"4-A medida do lado de um triangulo equilatero\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==25)
	{
		printf ("26-O que � Pi na matem�tica?\n"
		"1-Uma formula de Newton\n"
		"2-Abrevia��o de piolho\n"
		"3-Um n�mero racional\n"
		"4-Um n�mero irracional\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==26)
	{
		printf ("27-Quem foi Isaac Newton?\n"
		"1-Fot�grafo\n"
		"2-Fisiculturista\n"
		"3-F�sico\n"
		"4-Motorista\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==27)
	{
		printf ("28-Qual � o maior continente, tanto em �rea como em popula��o?\n"
		"1-�sia\n"
		"2-�frica\n"
		"3-Europa\n"
		"4-Oceania\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==28)
	{
		printf ("29-Como � chamado uma descarga el�trica de grande intensidade que ocorre na atmosfera?\n"
		"1-Trov�o\n"
		"2-Raio\n"
		"3-Rel�mpago\n"
		"4-Erup��o\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==29)
	{
		printf ("30-Em que continente est� localizado o Catar?\n"
		"1-�frica\n"
		"2-�sia\n"
		"3-Am�rica Central\n"
		"4-Oceania\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==30)
	{
		printf ("31-Qual planeta abriga o maior vulc�o do Sistema Solar?\n"
		"1-Terra\n"
		"2-Marte\n"
		"3-V�nus\n"
		"4-Urano\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==31)
	{
		printf ("32-Qual planeta tem um furac�o hexagonal em um de seus polos?\n"
		"1-Saturno\n"
		"2-Terra\n"
		"3-Netuno\n"
		"4-J�piter\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==32)
	{
		printf ("33-Qual planeta an�o costumava ser considerado o nono planeta do Sistema Solar?\n"
		"1-Plut�o\n"
		"2-Eris\n"
		"3-Ceris\n"
		"4-Netuno\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==33)
	{
		printf ("34-Qual � o maior planeta do Sistema Solar?\n"
		"1-Urano\n"
		"2-Saturno\n"
		"3-Terra\n"
		"4-J�piter\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==34)
	{
		printf ("35-Qual planeta � apenas um pouco maior que a Lua da Terra?\n"
		"1-Plut�o\n"
		"2-Merc�rio\n"
		"3-Marte\n"
		"4-V�nus\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==35)
	{
		printf ("36-Qual desses planetas � coberto 70% com �gua l�quida?\n"
		"1-Urano\n"
		"2-Marte\n"
		"3-Terra\n"
		"4-Merc�rio\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==36)
	{
		printf ("37-Em qual pa�s ocorreu o domingo sangrento?\n"
		"1-Rep�blica Dominicanica\n"
		"2-Chile\n"
		"3-Costa Rica\n"
		"4-R�ssia\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==37)
	{
		printf ("38-Qual escola Harry Potter estudou?\n"
		"1-Uagadou\n"
		"2-Llvermorny\n"
		"3-Hogwarts\n"
		"4-Castelobruxo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==38)
	{
		printf ("39-Qual Homem-Aranha foi o espetacular?\n"
		"1-Tom Holland\n"
		"2-Tobey Maguire\n"
		"3-Andrew Garfield\n"
		"4-Tobey Nagguire\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p1==39)
	{
		printf ("40-No universo Naruto, quais s�o os tr�s Sannins Lend�rios?\n"
		"1-Naruto, Sasuke, Sakura\n"
		"2-Kakashi, Obito, Rin\n"
		"3-Hashirama, Minato, Tobirama\n"
		"4-Orochiramu, Tsunade, Jiraiya\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==0)
	{
		printf ("1-Qual a capital do Brasil?\n"
		"1-S�o Paulo\n"
		"2-Rio de Janeiro\n"
		"3-Bras�lia\n"
		"4-Minas Gerais\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==1)
	{
		printf ("2-Assinale a alternativa que possui substantivo sobrecomum.\n"
		"1-Crocodilo\n"
		"2-Colega\n"
		"3-Cavalheiro\n"
		"4-Individuo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==2)
	{
		printf ("3-Em que ano foi implementado o plano real?\n"
		"1-1994\n"
		"2-1876\n"
		"3-1990\n"
		"4-1970\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==3)
	{
		printf ("4-Qual artista pintou o teto da capela sistina, no Vaticano?\n"
		"1-Vicente Van Gogh\n"
		"2-Anita Malfatti\n"
		"3-Candido Portinari\n"
		"4-Michelangelo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==4)
	{
		printf ("5-Qual foi o primeiro pa�s a permitir o voto feminino?\n"
		"1-Brasil\n"
		"2-Venezuela\n"
		"3-Nova Zel�ndia\n"
		"4-Fran�a\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==5)
	{
		printf ("6-A tabela peri�dica tem quantos elementos qu�micos?\n"
		"1-118\n"
		"2-200\n"
		"3-110\n"
		"4-54\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==6)
	{
		printf ("7-Qual o menor pa�s do mundo?\n"
		"1-Vaticano\n"
		"2-Monaco\n"
		"3-Nauro\n"
		"4-Alemanha\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==7)
	{
		printf ("8-Em que pa�s nasceu a pintora Frida Kahlo?\n"
		"1-Brasil\n"
		"2-M�xico\n"
		"3-Fran�a\n"
		"4-Portugal\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==8)
	{
		printf ("9-Qual artista pintou o famoso quadro: O GRITO?\n"
		"1-Edvard Munch\n"
		"2-Van Gogh\n"
		"3-Frida Kaloh\n"
		"4-Da vinci\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==9)
	{
		printf ("10-Em que ano o Rio de Janeiro sediou os Jogos Ol�mpicos?\n"
		"1-2016\n"
		"2-2010\n"
		"3-2000\n"
		"4-2023\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==10)
	{
		printf ("11-Qual esporte pratica o ex atleta ingl�s David Backham?\n"
		"1-v�lei\n"
		"2-nata��o\n"
		"3-futebol\n"
		"4-golfe\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==11)
	{
		printf ("12-Qual cidade foi dividida por um muro em 1961 e 1989, derrubado por sua popula��o?\n"
		"1-Cairo, no Egito\n"
		"2-Osasco, no Brasil\n"
		"3-Berlim, na Alemanha\n"
		"4-Mumbai, na �ndia\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==12)
	{
		printf ("13-Quais cidades japonesas foram atingidas pelas bombas at�micas lan�adas pelo EUA no ano de 1945?\n"
		"1-Mumbai e Osasco\n"
		"2-Hiroshima e Nagasaki\n"
		"3-Cairo e Dhaka\n"
		"4-Berlim e Pequim\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==13)
	{
		printf ("14-A frase: Saio da vida para entrar na hist�ria, pertence a qual presidente brasileiro?\n"
		"1-Juscelino Kubitschek\n"
		"2-Get�lio Vargas\n"
		"3-Jo�o Goulart\n"
		"4-J�nio Quadros\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==14)
	{
		printf ("15-A quem pertence a obra de arte: A noite estrelada?\n"
		"1-Leonardo da Vinci\n"
		"2-Pablo Picasso\n"
		"3-Michelangelo Buonarotti\n"
		"4-Vicent Van Gogh\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==15)
	{
		printf ("16-A sele��o brasileira ficou em qual coloca��o na copa do mundo de 2014?\n"
		"1-1� coloca��o\n"
		"2-4� coloca��o\n"
		"3-3� coloca��o\n"
		"4-2� coloca��o\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==16)
	{
		printf ("17-Qual foi a data exata do atentado as torres g�meas nos Estados Unidos?\n"
		"1-11 de Novembro de 2000\n"
		"2-12 de Semtembro de 2001\n"
		"3-11 de Setembro de 2001\n"
		"4-12 de Novembro de 2000\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==17)
	{
		printf ("18-Quem assumiu a presid�ncia antes de Jair Messias Bolsonaro?\n"
		"1-Michel Temer\n"
		"2-Dilma Roussef\n"
		"3-Luis In�cio Lula da Silva\n"
		"4-Fernando Henrique Cardoso\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==18)
	{
		printf ("19-De quem � a famosa frase: Penso, logo existo?\n"
		"1-Plat�o\n"
		"2-Galileu Galilei\n"
		"3-Descartes\n"
		"4-S�crates\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==19)
	{
		printf ("20-Quais os tr�s estados da mat�ria?\n"
		"1-S�lido, L�quido e gasoso\n"
		"2-S�lido, L�quido e Plasma\n"
		"3-S�lido, L�quido e Energia\n"
		"4-L�quido, Gasoso e Plasma\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==20)
	{
		printf ("21-Quais s�o algumas linguagens de programa��o populares?\n"
		"1-Python, C++ e Java\n"
		"2-Ruby, Perl e Lisp\n"
		"3-Swift, Objective-C e Kotlin\n"
		"4-HTML, CSS e JavaScript\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==21)
	{
		printf ("22-Quais s�o os tr�s ramos do governo do Brasil?\n"
		"1-Federal, Estadual e Municipal\n"
		"2-Agricultura, Com�rcio e Defesa\n"
		"3-Transporte, Energia e Comercio\n"
		"4-Executivo, Legislativo e Judici�rio\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==22)
	{
		printf ("23-Quais s�o algumas plataformas populares de midia social?\n"
		"1-Facebook, Twitter e Instagram\n"
		"2-LinkedIn, TikTok e Snapchat\n"
		"3-Pinteres, Reddit e Tumblr\n"
		"4-Youtube, Vimeo e Dailymotion\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==23)
	{
		printf ("24-Quais s�o algumas teorias �ticas famosas na filisofia?\n"
		"1-Utilitarismo, Deontologia e �tica da Virtude\n"
		"2-Relativismo, Subjetivismo e Emotivismo\n"
		"3-Hedonismo, Eudaimonismo e Epcurismo\n"
		"4-Positivismo, Naturalismo e Pragmatismo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==24)
	{
		printf ("25-O que significa hipotenusa?\n"
		"1-A f�mea do Hipop�tamo\n"
		"2-O comprimento de uma circunfer�ncia\n"
		"3-O maior lado de um tri�ngulo ret�ngulo\n"
		"4-A medida do lado de um triangulo equilatero\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==25)
	{
		printf ("26-O que � Pi na matem�tica?\n"
		"1-Uma formula de Newton\n"
		"2-Abrevia��o de piolho\n"
		"3-Um n�mero racional\n"
		"4-Um n�mero irracional\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==26)
	{
		printf ("27-Quem foi Isaac Newton?\n"
		"1-Fot�grafo\n"
		"2-Fisiculturista\n"
		"3-F�sico\n"
		"4-Motorista\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==27)
	{
		printf ("28-Qual � o maior continente, tanto em �rea como em popula��o?\n"
		"1-�sia\n"
		"2-�frica\n"
		"3-Europa\n"
		"4-Oceania\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==28)
	{
		printf ("29-Como � chamado uma descarga el�trica de grande intensidade que ocorre na atmosfera?\n"
		"1-Trov�o\n"
		"2-Raio\n"
		"3-Rel�mpago\n"
		"4-Erup��o\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==29)
	{
		printf ("30-Em que continente est� localizado o Catar?\n"
		"1-�frica\n"
		"2-�sia\n"
		"3-Am�rica Central\n"
		"4-Oceania\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==30)
	{
		printf ("31-Qual planeta abriga o maior vulc�o do Sistema Solar?\n"
		"1-Terra\n"
		"2-Marte\n"
		"3-V�nus\n"
		"4-Urano\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==31)
	{
		printf ("32-Qual planeta tem um furac�o hexagonal em um de seus polos?\n"
		"1-Saturno\n"
		"2-Terra\n"
		"3-Netuno\n"
		"4-J�piter\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==32)
	{
		printf ("33-Qual planeta an�o costumava ser considerado o nono planeta do Sistema Solar?\n"
		"1-Plut�o\n"
		"2-Eris\n"
		"3-Ceris\n"
		"4-Netuno\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==33)
	{
		printf ("34-Qual � o maior planeta do Sistema Solar?\n"
		"1-Urano\n"
		"2-Saturno\n"
		"3-Terra\n"
		"4-J�piter\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==34)
	{
		printf ("35-Qual planeta � apenas um pouco maior que a Lua da Terra?\n"
		"1-Plut�o\n"
		"2-Merc�rio\n"
		"3-Marte\n"
		"4-V�nus\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==35)
	{
		printf ("36-Qual desses planetas � coberto 70% com �gua l�quida?\n"
		"1-Urano\n"
		"2-Marte\n"
		"3-Terra\n"
		"4-Merc�rio\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==36)
	{
		printf ("37-Em qual pa�s ocorreu o domingo sangrento?\n"
		"1-Rep�blica Dominicanica\n"
		"2-Chile\n"
		"3-Costa Rica\n"
		"4-R�ssia\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==37)
	{
		printf ("38-Qual escola Harry Potter estudou?\n"
		"1-Uagadou\n"
		"2-Llvermorny\n"
		"3-Hogwarts\n"
		"4-Castelobruxo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==38)
	{
		printf ("39-Qual Homem-Aranha foi o espetacular?\n"
		"1-Tom Holland\n"
		"2-Tobey Maguire\n"
		"3-Andrew Garfield\n"
		"4-Tobey Nagguire\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p2==39)
	{
		printf ("40-No universo Naruto, quais s�o os tr�s Sannins Lend�rios?\n"
		"1-Naruto, Sasuke, Sakura\n"
		"2-Kakashi, Obito, Rin\n"
		"3-Hashirama, Minato, Tobirama\n"
		"4-Orochiramu, Tsunade, Jiraiya\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==0)
	{
		printf ("1-Qual a capital do Brasil?\n"
		"1-S�o Paulo\n"
		"2-Rio de Janeiro\n"
		"3-Bras�lia\n"
		"4-Minas Gerais\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==1)
	{
		printf ("2-Assinale a alternativa que possui substantivo sobrecomum.\n"
		"1-Crocodilo\n"
		"2-Colega\n"
		"3-Cavalheiro\n"
		"4-Individuo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==2)
	{
		printf ("3-Em que ano foi implementado o plano real?\n"
		"1-1994\n"
		"2-1876\n"
		"3-1990\n"
		"4-1970\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==3)
	{
		printf ("4-Qual artista pintou o teto da capela sistina, no Vaticano?\n"
		"1-Vicente Van Gogh\n"
		"2-Anita Malfatti\n"
		"3-Candido Portinari\n"
		"4-Michelangelo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==4)
	{
		printf ("5-Qual foi o primeiro pa�s a permitir o voto feminino?\n"
		"1-Brasil\n"
		"2-Venezuela\n"
		"3-Nova Zel�ndia\n"
		"4-Fran�a\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==5)
	{
		printf ("6-A tabela peri�dica tem quantos elementos qu�micos?\n"
		"1-118\n"
		"2-200\n"
		"3-110\n"
		"4-54\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==6)
	{
		printf ("7-Qual o menor pa�s do mundo?\n"
		"1-Vaticano\n"
		"2-Monaco\n"
		"3-Nauro\n"
		"4-Alemanha\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==7)
	{
		printf ("8-Em que pa�s nasceu a pintora Frida Kahlo?\n"
		"1-Brasil\n"
		"2-M�xico\n"
		"3-Fran�a\n"
		"4-Portugal\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==8)
	{
		printf ("9-Qual artista pintou o famoso quadro: O GRITO?\n"
		"1-Edvard Munch\n"
		"2-Van Gogh\n"
		"3-Frida Kaloh\n"
		"4-Da vinci\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==9)
	{
		printf ("10-Em que ano o Rio de Janeiro sediou os Jogos Ol�mpicos?\n"
		"1-2016\n"
		"2-2010\n"
		"3-2000\n"
		"4-2023\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==10)
	{
		printf ("11-Qual esporte pratica o ex atleta ingl�s David Backham?\n"
		"1-v�lei\n"
		"2-nata��o\n"
		"3-futebol\n"
		"4-golfe\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==11)
	{
		printf ("12-Qual cidade foi dividida por um muro em 1961 e 1989, derrubado por sua popula��o?\n"
		"1-Cairo, no Egito\n"
		"2-Osasco, no Brasil\n"
		"3-Berlim, na Alemanha\n"
		"4-Mumbai, na �ndia\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==12)
	{
		printf ("13-Quais cidades japonesas foram atingidas pelas bombas at�micas lan�adas pelo EUA no ano de 1945?\n"
		"1-Mumbai e Osasco\n"
		"2-Hiroshima e Nagasaki\n"
		"3-Cairo e Dhaka\n"
		"4-Berlim e Pequim\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==13)
	{
		printf ("14-A frase: Saio da vida para entrar na hist�ria, pertence a qual presidente brasileiro?\n"
		"1-Juscelino Kubitschek\n"
		"2-Get�lio Vargas\n"
		"3-Jo�o Goulart\n"
		"4-J�nio Quadros\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==14)
	{
		printf ("15-A quem pertence a obra de arte: A noite estrelada?\n"
		"1-Leonardo da Vinci\n"
		"2-Pablo Picasso\n"
		"3-Michelangelo Buonarotti\n"
		"4-Vicent Van Gogh\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==15)
	{
		printf ("16-A sele��o brasileira ficou em qual coloca��o na copa do mundo de 2014?\n"
		"1-1� coloca��o\n"
		"2-4� coloca��o\n"
		"3-3� coloca��o\n"
		"4-2� coloca��o\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==16)
	{
		printf ("17-Qual foi a data exata do atentado as torres g�meas nos Estados Unidos?\n"
		"1-11 de Novembro de 2000\n"
		"2-12 de Semtembro de 2001\n"
		"3-11 de Setembro de 2001\n"
		"4-12 de Novembro de 2000\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==17)
	{
		printf ("18-Quem assumiu a presid�ncia antes de Jair Messias Bolsonaro?\n"
		"1-Michel Temer\n"
		"2-Dilma Roussef\n"
		"3-Luis In�cio Lula da Silva\n"
		"4-Fernando Henrique Cardoso\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==18)
	{
		printf ("19-De quem � a famosa frase: Penso, logo existo?\n"
		"1-Plat�o\n"
		"2-Galileu Galilei\n"
		"3-Descartes\n"
		"4-S�crates\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==19)
	{
		printf ("20-Quais os tr�s estados da mat�ria?\n"
		"1-S�lido, L�quido e gasoso\n"
		"2-S�lido, L�quido e Plasma\n"
		"3-S�lido, L�quido e Energia\n"
		"4-L�quido, Gasoso e Plasma\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==20)
	{
		printf ("21-Quais s�o algumas linguagens de programa��o populares?\n"
		"1-Python, C++ e Java\n"
		"2-Ruby, Perl e Lisp\n"
		"3-Swift, Objective-C e Kotlin\n"
		"4-HTML, CSS e JavaScript\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==21)
	{
		printf ("22-Quais s�o os tr�s ramos do governo do Brasil?\n"
		"1-Federal, Estadual e Municipal\n"
		"2-Agricultura, Com�rcio e Defesa\n"
		"3-Transporte, Energia e Comercio\n"
		"4-Executivo, Legislativo e Judici�rio\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==22)
	{
		printf ("23-Quais s�o algumas plataformas populares de midia social?\n"
		"1-Facebook, Twitter e Instagram\n"
		"2-LinkedIn, TikTok e Snapchat\n"
		"3-Pinteres, Reddit e Tumblr\n"
		"4-Youtube, Vimeo e Dailymotion\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==23)
	{
		printf ("24-Quais s�o algumas teorias �ticas famosas na filisofia?\n"
		"1-Utilitarismo, Deontologia e �tica da Virtude\n"
		"2-Relativismo, Subjetivismo e Emotivismo\n"
		"3-Hedonismo, Eudaimonismo e Epcurismo\n"
		"4-Positivismo, Naturalismo e Pragmatismo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==24)
	{
		printf ("25-O que significa hipotenusa?\n"
		"1-A f�mea do Hipop�tamo\n"
		"2-O comprimento de uma circunfer�ncia\n"
		"3-O maior lado de um tri�ngulo ret�ngulo\n"
		"4-A medida do lado de um triangulo equilatero\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==25)
	{
		printf ("26-O que � Pi na matem�tica?\n"
		"1-Uma formula de Newton\n"
		"2-Abrevia��o de piolho\n"
		"3-Um n�mero racional\n"
		"4-Um n�mero irracional\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==26)
	{
		printf ("27-Quem foi Isaac Newton?\n"
		"1-Fot�grafo\n"
		"2-Fisiculturista\n"
		"3-F�sico\n"
		"4-Motorista\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==27)
	{
		printf ("28-Qual � o maior continente, tanto em �rea como em popula��o?\n"
		"1-�sia\n"
		"2-�frica\n"
		"3-Europa\n"
		"4-Oceania\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==28)
	{
		printf ("29-Como � chamado uma descarga el�trica de grande intensidade que ocorre na atmosfera?\n"
		"1-Trov�o\n"
		"2-Raio\n"
		"3-Rel�mpago\n"
		"4-Erup��o\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==29)
	{
		printf ("30-Em que continente est� localizado o Catar?\n"
		"1-�frica\n"
		"2-�sia\n"
		"3-Am�rica Central\n"
		"4-Oceania\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==30)
	{
		printf ("31-Qual planeta abriga o maior vulc�o do Sistema Solar?\n"
		"1-Terra\n"
		"2-Marte\n"
		"3-V�nus\n"
		"4-Urano\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==31)
	{
		printf ("32-Qual planeta tem um furac�o hexagonal em um de seus polos?\n"
		"1-Saturno\n"
		"2-Terra\n"
		"3-Netuno\n"
		"4-J�piter\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==32)
	{
		printf ("33-Qual planeta an�o costumava ser considerado o nono planeta do Sistema Solar?\n"
		"1-Plut�o\n"
		"2-Eris\n"
		"3-Ceris\n"
		"4-Netuno\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==33)
	{
		printf ("34-Qual � o maior planeta do Sistema Solar?\n"
		"1-Urano\n"
		"2-Saturno\n"
		"3-Terra\n"
		"4-J�piter\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==34)
	{
		printf ("35-Qual planeta � apenas um pouco maior que a Lua da Terra?\n"
		"1-Plut�o\n"
		"2-Merc�rio\n"
		"3-Marte\n"
		"4-V�nus\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==35)
	{
		printf ("36-Qual desses planetas � coberto 70% com �gua l�quida?\n"
		"1-Urano\n"
		"2-Marte\n"
		"3-Terra\n"
		"4-Merc�rio\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==36)
	{
		printf ("37-Em qual pa�s ocorreu o domingo sangrento?\n"
		"1-Rep�blica Dominicanica\n"
		"2-Chile\n"
		"3-Costa Rica\n"
		"4-R�ssia\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==37)
	{
		printf ("38-Qual escola Harry Potter estudou?\n"
		"1-Uagadou\n"
		"2-Llvermorny\n"
		"3-Hogwarts\n"
		"4-Castelobruxo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==38)
	{
		printf ("39-Qual Homem-Aranha foi o espetacular?\n"
		"1-Tom Holland\n"
		"2-Tobey Maguire\n"
		"3-Andrew Garfield\n"
		"4-Tobey Nagguire\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p3==39)
	{
		printf ("40-No universo Naruto, quais s�o os tr�s Sannins Lend�rios?\n"
		"1-Naruto, Sasuke, Sakura\n"
		"2-Kakashi, Obito, Rin\n"
		"3-Hashirama, Minato, Tobirama\n"
		"4-Orochiramu, Tsunade, Jiraiya\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==0)
	{
		printf ("1-Qual a capital do Brasil?\n"
		"1-S�o Paulo\n"
		"2-Rio de Janeiro\n"
		"3-Bras�lia\n"
		"4-Minas Gerais\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==1)
	{
		printf ("2-Assinale a alternativa que possui substantivo sobrecomum.\n"
		"1-Crocodilo\n"
		"2-Colega\n"
		"3-Cavalheiro\n"
		"4-Individuo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==2)
	{
		printf ("3-Em que ano foi implementado o plano real?\n"
		"1-1994\n"
		"2-1876\n"
		"3-1990\n"
		"4-1970\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==3)
	{
		printf ("4-Qual artista pintou o teto da capela sistina, no Vaticano?\n"
		"1-Vicente Van Gogh\n"
		"2-Anita Malfatti\n"
		"3-Candido Portinari\n"
		"4-Michelangelo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==4)
	{
		printf ("5-Qual foi o primeiro pa�s a permitir o voto feminino?\n"
		"1-Brasil\n"
		"2-Venezuela\n"
		"3-Nova Zel�ndia\n"
		"4-Fran�a\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==5)
	{
		printf ("6-A tabela peri�dica tem quantos elementos qu�micos?\n"
		"1-118\n"
		"2-200\n"
		"3-110\n"
		"4-54\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==6)
	{
		printf ("7-Qual o menor pa�s do mundo?\n"
		"1-Vaticano\n"
		"2-Monaco\n"
		"3-Nauro\n"
		"4-Alemanha\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==7)
	{
		printf ("8-Em que pa�s nasceu a pintora Frida Kahlo?\n"
		"1-Brasil\n"
		"2-M�xico\n"
		"3-Fran�a\n"
		"4-Portugal\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==8)
	{
		printf ("9-Qual artista pintou o famoso quadro: O GRITO?\n"
		"1-Edvard Munch\n"
		"2-Van Gogh\n"
		"3-Frida Kaloh\n"
		"4-Da vinci\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==9)
	{
		printf ("10-Em que ano o Rio de Janeiro sediou os Jogos Ol�mpicos?\n"
		"1-2016\n"
		"2-2010\n"
		"3-2000\n"
		"4-2023\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==10)
	{
		printf ("11-Qual esporte pratica o ex atleta ingl�s David Backham?\n"
		"1-v�lei\n"
		"2-nata��o\n"
		"3-futebol\n"
		"4-golfe\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==11)
	{
		printf ("12-Qual cidade foi dividida por um muro em 1961 e 1989, derrubado por sua popula��o?\n"
		"1-Cairo, no Egito\n"
		"2-Osasco, no Brasil\n"
		"3-Berlim, na Alemanha\n"
		"4-Mumbai, na �ndia\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==12)
	{
		printf ("13-Quais cidades japonesas foram atingidas pelas bombas at�micas lan�adas pelo EUA no ano de 1945?\n"
		"1-Mumbai e Osasco\n"
		"2-Hiroshima e Nagasaki\n"
		"3-Cairo e Dhaka\n"
		"4-Berlim e Pequim\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==13)
	{
		printf ("14-A frase: Saio da vida para entrar na hist�ria, pertence a qual presidente brasileiro?\n"
		"1-Juscelino Kubitschek\n"
		"2-Get�lio Vargas\n"
		"3-Jo�o Goulart\n"
		"4-J�nio Quadros\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==14)
	{
		printf ("15-A quem pertence a obra de arte: A noite estrelada?\n"
		"1-Leonardo da Vinci\n"
		"2-Pablo Picasso\n"
		"3-Michelangelo Buonarotti\n"
		"4-Vicent Van Gogh\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==15)
	{
		printf ("16-A sele��o brasileira ficou em qual coloca��o na copa do mundo de 2014?\n"
		"1-1� coloca��o\n"
		"2-4� coloca��o\n"
		"3-3� coloca��o\n"
		"4-2� coloca��o\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==16)
	{
		printf ("17-Qual foi a data exata do atentado as torres g�meas nos Estados Unidos?\n"
		"1-11 de Novembro de 2000\n"
		"2-12 de Semtembro de 2001\n"
		"3-11 de Setembro de 2001\n"
		"4-12 de Novembro de 2000\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==17)
	{
		printf ("18-Quem assumiu a presid�ncia antes de Jair Messias Bolsonaro?\n"
		"1-Michel Temer\n"
		"2-Dilma Roussef\n"
		"3-Luis In�cio Lula da Silva\n"
		"4-Fernando Henrique Cardoso\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==18)
	{
		printf ("19-De quem � a famosa frase: Penso, logo existo?\n"
		"1-Plat�o\n"
		"2-Galileu Galilei\n"
		"3-Descartes\n"
		"4-S�crates\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==19)
	{
		printf ("20-Quais os tr�s estados da mat�ria?\n"
		"1-S�lido, L�quido e gasoso\n"
		"2-S�lido, L�quido e Plasma\n"
		"3-S�lido, L�quido e Energia\n"
		"4-L�quido, Gasoso e Plasma\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==20)
	{
		printf ("21-Quais s�o algumas linguagens de programa��o populares?\n"
		"1-Python, C++ e Java\n"
		"2-Ruby, Perl e Lisp\n"
		"3-Swift, Objective-C e Kotlin\n"
		"4-HTML, CSS e JavaScript\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==21)
	{
		printf ("22-Quais s�o os tr�s ramos do governo do Brasil?\n"
		"1-Federal, Estadual e Municipal\n"
		"2-Agricultura, Com�rcio e Defesa\n"
		"3-Transporte, Energia e Comercio\n"
		"4-Executivo, Legislativo e Judici�rio\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==22)
	{
		printf ("23-Quais s�o algumas plataformas populares de midia social?\n"
		"1-Facebook, Twitter e Instagram\n"
		"2-LinkedIn, TikTok e Snapchat\n"
		"3-Pinteres, Reddit e Tumblr\n"
		"4-Youtube, Vimeo e Dailymotion\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==23)
	{
		printf ("24-Quais s�o algumas teorias �ticas famosas na filisofia?\n"
		"1-Utilitarismo, Deontologia e �tica da Virtude\n"
		"2-Relativismo, Subjetivismo e Emotivismo\n"
		"3-Hedonismo, Eudaimonismo e Epcurismo\n"
		"4-Positivismo, Naturalismo e Pragmatismo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==24)
	{
		printf ("25-O que significa hipotenusa?\n"
		"1-A f�mea do Hipop�tamo\n"
		"2-O comprimento de uma circunfer�ncia\n"
		"3-O maior lado de um tri�ngulo ret�ngulo\n"
		"4-A medida do lado de um triangulo equilatero\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==25)
	{
		printf ("26-O que � Pi na matem�tica?\n"
		"1-Uma formula de Newton\n"
		"2-Abrevia��o de piolho\n"
		"3-Um n�mero racional\n"
		"4-Um n�mero irracional\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==26)
	{
		printf ("27-Quem foi Isaac Newton?\n"
		"1-Fot�grafo\n"
		"2-Fisiculturista\n"
		"3-F�sico\n"
		"4-Motorista\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==27)
	{
		printf ("28-Qual � o maior continente, tanto em �rea como em popula��o?\n"
		"1-�sia\n"
		"2-�frica\n"
		"3-Europa\n"
		"4-Oceania\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==28)
	{
		printf ("29-Como � chamado uma descarga el�trica de grande intensidade que ocorre na atmosfera?\n"
		"1-Trov�o\n"
		"2-Raio\n"
		"3-Rel�mpago\n"
		"4-Erup��o\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==29)
	{
		printf ("30-Em que continente est� localizado o Catar?\n"
		"1-�frica\n"
		"2-�sia\n"
		"3-Am�rica Central\n"
		"4-Oceania\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==30)
	{
		printf ("31-Qual planeta abriga o maior vulc�o do Sistema Solar?\n"
		"1-Terra\n"
		"2-Marte\n"
		"3-V�nus\n"
		"4-Urano\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==31)
	{
		printf ("32-Qual planeta tem um furac�o hexagonal em um de seus polos?\n"
		"1-Saturno\n"
		"2-Terra\n"
		"3-Netuno\n"
		"4-J�piter\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==32)
	{
		printf ("33-Qual planeta an�o costumava ser considerado o nono planeta do Sistema Solar?\n"
		"1-Plut�o\n"
		"2-Eris\n"
		"3-Ceris\n"
		"4-Netuno\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==33)
	{
		printf ("34-Qual � o maior planeta do Sistema Solar?\n"
		"1-Urano\n"
		"2-Saturno\n"
		"3-Terra\n"
		"4-J�piter\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==34)
	{
		printf ("35-Qual planeta � apenas um pouco maior que a Lua da Terra?\n"
		"1-Plut�o\n"
		"2-Merc�rio\n"
		"3-Marte\n"
		"4-V�nus\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==35)
	{
		printf ("36-Qual desses planetas � coberto 70% com �gua l�quida?\n"
		"1-Urano\n"
		"2-Marte\n"
		"3-Terra\n"
		"4-Merc�rio\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==36)
	{
		printf ("37-Em qual pa�s ocorreu o domingo sangrento?\n"
		"1-Rep�blica Dominicanica\n"
		"2-Chile\n"
		"3-Costa Rica\n"
		"4-R�ssia\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==37)
	{
		printf ("38-Qual escola Harry Potter estudou?\n"
		"1-Uagadou\n"
		"2-Llvermorny\n"
		"3-Hogwarts\n"
		"4-Castelobruxo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==38)
	{
		printf ("39-Qual Homem-Aranha foi o espetacular?\n"
		"1-Tom Holland\n"
		"2-Tobey Maguire\n"
		"3-Andrew Garfield\n"
		"4-Tobey Nagguire\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p4==39)
	{
		printf ("40-No universo Naruto, quais s�o os tr�s Sannins Lend�rios?\n"
		"1-Naruto, Sasuke, Sakura\n"
		"2-Kakashi, Obito, Rin\n"
		"3-Hashirama, Minato, Tobirama\n"
		"4-Orochiramu, Tsunade, Jiraiya\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==0)
	{
		printf ("1-Qual a capital do Brasil?\n"
		"1-S�o Paulo\n"
		"2-Rio de Janeiro\n"
		"3-Bras�lia\n"
		"4-Minas Gerais\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==1)
	{
		printf ("2-Assinale a alternativa que possui substantivo sobrecomum.\n"
		"1-Crocodilo\n"
		"2-Colega\n"
		"3-Cavalheiro\n"
		"4-Individuo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==2)
	{
		printf ("3-Em que ano foi implementado o plano real?\n"
		"1-1994\n"
		"2-1876\n"
		"3-1990\n"
		"4-1970\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==3)
	{
		printf ("4-Qual artista pintou o teto da capela sistina, no Vaticano?\n"
		"1-Vicente Van Gogh\n"
		"2-Anita Malfatti\n"
		"3-Candido Portinari\n"
		"4-Michelangelo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==4)
	{
		printf ("5-Qual foi o primeiro pa�s a permitir o voto feminino?\n"
		"1-Brasil\n"
		"2-Venezuela\n"
		"3-Nova Zel�ndia\n"
		"4-Fran�a\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==5)
	{
		printf ("6-A tabela peri�dica tem quantos elementos qu�micos?\n"
		"1-118\n"
		"2-200\n"
		"3-110\n"
		"4-54\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==6)
	{
		printf ("7-Qual o menor pa�s do mundo?\n"
		"1-Vaticano\n"
		"2-Monaco\n"
		"3-Nauro\n"
		"4-Alemanha\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==7)
	{
		printf ("8-Em que pa�s nasceu a pintora Frida Kahlo?\n"
		"1-Brasil\n"
		"2-M�xico\n"
		"3-Fran�a\n"
		"4-Portugal\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==8)
	{
		printf ("9-Qual artista pintou o famoso quadro: O GRITO?\n"
		"1-Edvard Munch\n"
		"2-Van Gogh\n"
		"3-Frida Kaloh\n"
		"4-Da vinci\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==9)
	{
		printf ("10-Em que ano o Rio de Janeiro sediou os Jogos Ol�mpicos?\n"
		"1-2016\n"
		"2-2010\n"
		"3-2000\n"
		"4-2023\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==10)
	{
		printf ("11-Qual esporte pratica o ex atleta ingl�s David Backham?\n"
		"1-v�lei\n"
		"2-nata��o\n"
		"3-futebol\n"
		"4-golfe\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==11)
	{
		printf ("12-Qual cidade foi dividida por um muro em 1961 e 1989, derrubado por sua popula��o?\n"
		"1-Cairo, no Egito\n"
		"2-Osasco, no Brasil\n"
		"3-Berlim, na Alemanha\n"
		"4-Mumbai, na �ndia\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==12)
	{
		printf ("13-Quais cidades japonesas foram atingidas pelas bombas at�micas lan�adas pelo EUA no ano de 1945?\n"
		"1-Mumbai e Osasco\n"
		"2-Hiroshima e Nagasaki\n"
		"3-Cairo e Dhaka\n"
		"4-Berlim e Pequim\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==13)
	{
		printf ("14-A frase: Saio da vida para entrar na hist�ria, pertence a qual presidente brasileiro?\n"
		"1-Juscelino Kubitschek\n"
		"2-Get�lio Vargas\n"
		"3-Jo�o Goulart\n"
		"4-J�nio Quadros\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==14)
	{
		printf ("15-A quem pertence a obra de arte: A noite estrelada?\n"
		"1-Leonardo da Vinci\n"
		"2-Pablo Picasso\n"
		"3-Michelangelo Buonarotti\n"
		"4-Vicent Van Gogh\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==15)
	{
		printf ("16-A sele��o brasileira ficou em qual coloca��o na copa do mundo de 2014?\n"
		"1-1� coloca��o\n"
		"2-4� coloca��o\n"
		"3-3� coloca��o\n"
		"4-2� coloca��o\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==16)
	{
		printf ("17-Qual foi a data exata do atentado as torres g�meas nos Estados Unidos?\n"
		"1-11 de Novembro de 2000\n"
		"2-12 de Semtembro de 2001\n"
		"3-11 de Setembro de 2001\n"
		"4-12 de Novembro de 2000\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==17)
	{
		printf ("18-Quem assumiu a presid�ncia antes de Jair Messias Bolsonaro?\n"
		"1-Michel Temer\n"
		"2-Dilma Roussef\n"
		"3-Luis In�cio Lula da Silva\n"
		"4-Fernando Henrique Cardoso\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==18)
	{
		printf ("19-De quem � a famosa frase: Penso, logo existo?\n"
		"1-Plat�o\n"
		"2-Galileu Galilei\n"
		"3-Descartes\n"
		"4-S�crates\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==19)
	{
		printf ("20-Quais os tr�s estados da mat�ria?\n"
		"1-S�lido, L�quido e gasoso\n"
		"2-S�lido, L�quido e Plasma\n"
		"3-S�lido, L�quido e Energia\n"
		"4-L�quido, Gasoso e Plasma\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==20)
	{
		printf ("21-Quais s�o algumas linguagens de programa��o populares?\n"
		"1-Python, C++ e Java\n"
		"2-Ruby, Perl e Lisp\n"
		"3-Swift, Objective-C e Kotlin\n"
		"4-HTML, CSS e JavaScript\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==21)
	{
		printf ("22-Quais s�o os tr�s ramos do governo do Brasil?\n"
		"1-Federal, Estadual e Municipal\n"
		"2-Agricultura, Com�rcio e Defesa\n"
		"3-Transporte, Energia e Comercio\n"
		"4-Executivo, Legislativo e Judici�rio\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==22)
	{
		printf ("23-Quais s�o algumas plataformas populares de midia social?\n"
		"1-Facebook, Twitter e Instagram\n"
		"2-LinkedIn, TikTok e Snapchat\n"
		"3-Pinteres, Reddit e Tumblr\n"
		"4-Youtube, Vimeo e Dailymotion\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==23)
	{
		printf ("24-Quais s�o algumas teorias �ticas famosas na filisofia?\n"
		"1-Utilitarismo, Deontologia e �tica da Virtude\n"
		"2-Relativismo, Subjetivismo e Emotivismo\n"
		"3-Hedonismo, Eudaimonismo e Epcurismo\n"
		"4-Positivismo, Naturalismo e Pragmatismo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==24)
	{
		printf ("25-O que significa hipotenusa?\n"
		"1-A f�mea do Hipop�tamo\n"
		"2-O comprimento de uma circunfer�ncia\n"
		"3-O maior lado de um tri�ngulo ret�ngulo\n"
		"4-A medida do lado de um triangulo equilatero\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==25)
	{
		printf ("26-O que � Pi na matem�tica?\n"
		"1-Uma formula de Newton\n"
		"2-Abrevia��o de piolho\n"
		"3-Um n�mero racional\n"
		"4-Um n�mero irracional\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==26)
	{
		printf ("27-Quem foi Isaac Newton?\n"
		"1-Fot�grafo\n"
		"2-Fisiculturista\n"
		"3-F�sico\n"
		"4-Motorista\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==27)
	{
		printf ("28-Qual � o maior continente, tanto em �rea como em popula��o?\n"
		"1-�sia\n"
		"2-�frica\n"
		"3-Europa\n"
		"4-Oceania\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==28)
	{
		printf ("29-Como � chamado uma descarga el�trica de grande intensidade que ocorre na atmosfera?\n"
		"1-Trov�o\n"
		"2-Raio\n"
		"3-Rel�mpago\n"
		"4-Erup��o\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==29)
	{
		printf ("30-Em que continente est� localizado o Catar?\n"
		"1-�frica\n"
		"2-�sia\n"
		"3-Am�rica Central\n"
		"4-Oceania\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==30)
	{
		printf ("31-Qual planeta abriga o maior vulc�o do Sistema Solar?\n"
		"1-Terra\n"
		"2-Marte\n"
		"3-V�nus\n"
		"4-Urano\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==31)
	{
		printf ("32-Qual planeta tem um furac�o hexagonal em um de seus polos?\n"
		"1-Saturno\n"
		"2-Terra\n"
		"3-Netuno\n"
		"4-J�piter\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==32)
	{
		printf ("33-Qual planeta an�o costumava ser considerado o nono planeta do Sistema Solar?\n"
		"1-Plut�o\n"
		"2-Eris\n"
		"3-Ceris\n"
		"4-Netuno\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==1){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==33)
	{
		printf ("34-Qual � o maior planeta do Sistema Solar?\n"
		"1-Urano\n"
		"2-Saturno\n"
		"3-Terra\n"
		"4-J�piter\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
    }
	
	if(p5==34)
	{
		printf ("35-Qual planeta � apenas um pouco maior que a Lua da Terra?\n"
		"1-Plut�o\n"
		"2-Merc�rio\n"
		"3-Marte\n"
		"4-V�nus\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==2){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==35)
	{
		printf ("36-Qual desses planetas � coberto 70% com �gua l�quida?\n"
		"1-Urano\n"
		"2-Marte\n"
		"3-Terra\n"
		"4-Merc�rio\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==36)
	{
		printf ("37-Em qual pa�s ocorreu o domingo sangrento?\n"
		"1-Rep�blica Dominicanica\n"
		"2-Chile\n"
		"3-Costa Rica\n"
		"4-R�ssia\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==37)
	{
		printf ("38-Qual escola Harry Potter estudou?\n"
		"1-Uagadou\n"
		"2-Llvermorny\n"
		"3-Hogwarts\n"
		"4-Castelobruxo\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==38)
	{
		printf ("39-Qual Homem-Aranha foi o espetacular?\n"
		"1-Tom Holland\n"
		"2-Tobey Maguire\n"
		"3-Andrew Garfield\n"
		"4-Tobey Nagguire\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==3){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	if(p5==39)
	{
		printf ("40-No universo Naruto, quais s�o os tr�s Sannins Lend�rios?\n"
		"1-Naruto, Sasuke, Sakura\n"
		"2-Kakashi, Obito, Rin\n"
		"3-Hashirama, Minato, Tobirama\n"
		"4-Orochiramu, Tsunade, Jiraiya\n"
		"R: ");
		scanf ("%d", &r1);
			while (r1>=5||r1<=0){
			printf ("Resposta invalida, digite novamente\nR: ");
			scanf ("%d", &r1);
		}
		if (r1==4){
			printf ("Voc� acertou\n\n");certo++;
		}
		else {
			printf ("Voc� errou\n\n");
		}	
	}
	
	printf ("\n");
	
    if (certo==0){
    	printf ("     %s, voc� errou todas as quest�es. Por favor tente novamente. ;-;     ", nome);
	}
    else if (certo>3){
		printf ("     Parab�ns %s, voc� acertou %d quest�es. Que tal mais uma rodada? ;)     ", nome, certo);
	}
    else if (certo==1){
    	printf ("     %s, voc� acertou apenas %d quest�o. Que tal jogar novamente e tentar aumentar o n�mero de acertos? ;)     ", nome, certo);
	}
	else {
		printf ("     %s, voc� acertou apenas %d quest�es. Que tal jogar novamente e tentar aumentar o n�mero de acertos? ;)     ", nome, certo);
	}
	
	printf ("\n\n\n");
	
}
