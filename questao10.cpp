#include <stdio.h> // cabeçalho que da entrada e saida
#include <string.h> // cabeçalho que permite usar string

int main(){ // funcao principal 
	
 char nome[50]; // declarando a funcao nome que pode ter 50 caracters 
 int idade; // declarando a funcao int idade
 
 
 printf("Informe seu nome: "); // imprimindo msg que pedindo o nome do usuario 
 fflush(stdin); // limpa o buffer de teclado
 gets(nome); // funcao pra salvar a string nome
 
 
printf("Informe sua idade: "); // imprimindo msg pedindo o nome do usuario 
scanf("%d",&idade); // guardando a idade 

printf("Bem vindo(a) %s espero que vc tenha vivido bem seus %d anos!",nome,idade); // imprimindo a frase de saudacao
	
	
	
	
	
	
	
}
