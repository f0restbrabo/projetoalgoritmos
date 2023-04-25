#include <stdio.h> // cabeçalho que da entrada e saida 

int main(){ // funcao principal 

	int num; // variavel do tipo inteiro
	
	printf("Digite um numero: ");// imprimindo msg na tela pedindo um numero
	scanf("%d",&num); // guardando o valor do numero
	
	if(num%2==0){ // caso o resto do numero que o usuario digitou for 0
		printf("O numero eh par"); // vai imprimir que o numero eh par
		return 0; // finaliza o programa
	}

	printf("O numero eh impar"); // se nao for par, vai imprimir que ele e impar
}
