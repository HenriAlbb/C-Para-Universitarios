#include <iostream>



int main(int argc, char** argv) {
	
	float a, b, area, perimetro;
	
	printf("Informe a base do retangulo: ");
	scanf("%f", &a);
	
	printf("Agora informe a altura: ");
	scanf("%f", &b);
	
	area = a*b;
	perimetro = 2*(a+b);
	
	printf("\n\nArea: %f, perimentro: %f\n\n", area, perimetro);
	
	system("pause");
	
	return 0;
}
