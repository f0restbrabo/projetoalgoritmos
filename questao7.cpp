#include <stdio.h> // cabeçalho que da entrada e saida 

int main(){ // funcao principal

	int idade; // declarando a funcao idade 
	
	printf("Digite sua idade: "); // imprimindo msg na tela pedindo a idade
	scanf("%d",&idade); // guardando a idade
	
	if(idade>=18){ // caso a idade for maior ou igual a 18 
		printf("Voce e maior de idade"); // imprime que e maior de idade
	}
	else{ // caso nao for maior ou igual a 18
		printf("Voce e menor de idade"); // imprime que e menor de idade
	}










}
