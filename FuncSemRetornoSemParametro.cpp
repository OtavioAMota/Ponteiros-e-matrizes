#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

//informa que a funçao existe
void desenhaBorda();

int main(){
	setlocale(LC_ALL,"");
	desenhaBorda();
	cout<<"test\n";
	desenhaBorda();
	return 0;
}

//função vazia
void desenhaBorda(){
	printf("|--------------------------------------------|\n");
}
