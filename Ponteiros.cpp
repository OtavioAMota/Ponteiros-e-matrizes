#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	//variaveis
	int a = 20;
	
	//imprimindo valor da variavel
	cout<<"valor da variavel a:"<<a;
	
	//imprimindo o endereço da variavel a
	cout<<"\nEndereço da variavel a:"<<&a<<"\n";
	/* pode usar tambem:
	printf("Endereço da variavel a:%d",&a);
	*/
	
	//variaveis armazenam valores
	int b = 10;
	
	//ponteiros armazenam posiçoes da memoria
	int *ponteiro;
	//pontiero recebendo posicao da varaivel b
	ponteiro = &b;
	
	//imprimir valor da varaivel b
	printf("valor da varaivel b:%d\n",b);
	
	//o caracter *(asteristico) pode ser lido como "conteudo apontado por"
	*ponteiro = 40;
	
	//imprimir valor da varaivel b
	printf("valor da varaivel b:%d\n",b);
	
	return 0;
}
