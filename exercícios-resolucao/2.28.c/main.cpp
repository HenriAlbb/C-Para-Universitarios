#include <iostream>

int main(int argc, char** argv) {
	
	int valor, n;
	
	printf("Preco do produto: ");
	scanf("%d", &valor);
	
	n = valor/100;
	valor = valor%100;
	
	n = n + valor/50;
	valor = valor%50;
	
	n = n + valor/20;
	valor = valor%20;
	
	n = n + valor/10;
	valor = valor%10;
	
	n = n + valor/5;
	valor = valor%5;
	
	n = n + valor/2;
	valor = valor%2;
	
	n = n + valor/1;
	valor = valor%1;
	
	printf("\n\nQuantidade minima de notas: %d\n\n", n);
	
	system("pause");
	
	
	printf("sd: %d", 2%6);
	
	return 0;
}
