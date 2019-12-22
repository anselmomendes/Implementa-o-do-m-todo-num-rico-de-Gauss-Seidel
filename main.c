/*
Marab�, 21 de Setembro de 2017
UNIFESSPA - Universidade Federal do Sul e Sudeste do Par�;
Engenharia da Computa��o 2015;
Implementa��o m�todo de Gaus Seidel;
Discentes:

	Anselmo Mendes Oliveira
	Fernando da Silva Freire
	
-Esse codigo possui um algoritimo que realiza o calculo de matrizes utilizando o m�todo de Gaus-seidel;
-Nele � possivel escolher o tamanho da matriz em tempo de execu��o, usando a fun��o malloc;
-O c�digo dar ao usuario a op��o de definir a quantidade de intera��es;

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "calculoNumerico.h"

 main(){
	setlocale(LC_ALL, "Portuguese");
	int n,m;
	double erro;
	double* v;
	printf("==================================================\n");
	printf("             M�TODO DE GAUS SEIDEL  \n");
	printf("==================================================\n\n");
	printf("Digite o n�mero de equa��es!:  ");
	scanf("%d",&n);
	printf("Digite o erro m�nimo da fun��o: ");
	scanf("%lf",&erro);
	m = n+1;
	Sistema** s = cria_matriz(n,m);
	insere_matriz(s,n,m);
	calcula_matriz(s,n,m,erro);
	imprime_matriz(s,n,m);
	libera_matriz(s,n);
	system("pause");
}
