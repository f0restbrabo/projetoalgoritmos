#include <stdio.h> // cabeçalho que da entrada e saida 

int main(){ // funcao principal

	float cel,fah; // declarando variaveis float 
	
	printf("Digite a temperatura em Celsius: "); // imprimindo msg na tela pedindo a temperatura em celsius
	scanf("%f",&cel); // guardando a temperatura
	
	printf("Sua temperatura em celsius eh: %.2f \n",cel); // imprimindo a temperatura em celsius
	fah = (cel*1.8)+32; // declarando que fah é celsius*1.8+32
	printf("Sua temperatura em Fahrenheit eh %.2f",fah); // imprimindo a temperatura em celsius em fahrenheit








}
