#include <stdio.h> // cabeçalho que da entrada e saida 

int main(){ // funcao principal 
	
	float pi=3.14,area,raio; // declarando as variaveis float
	
	printf("Digite o raio: "); // imprimindo msg na tela pedindo o raio
	scanf("%f",&raio); // guardando oq o usuario digita
	
	area = pi*(raio*raio); // declarando que a area é pi x raio ao quadrado
	
	printf("A area do circulo de raio r eh: %.2f",area); // imprimindo a area
	
	
	
	
	
}
