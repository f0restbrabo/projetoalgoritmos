#include <stdio.h> // cabeçalho que da entrada e saida 

int main(){ // funcao principal

	int num,i; // declarando as variaveis
	
	
	printf("Digite um numero: "); // imprimindo a msg pedindo um numero
	scanf("%d",&num); // guardando o numero 
	
	for(i=0;i<=10;i++) // escrever a linha abaixo 11 vezes
	printf("%d x %d = %d \n",num,i,num*i); // mostrando a tabuada do numero que o usuario digitou
	








}
