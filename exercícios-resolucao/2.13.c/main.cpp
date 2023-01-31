#include <iostream>

int main(int argc, char** argv) {
	
	float base, altura, area;
	
	printf("Informe as dimensoes do triangulo: ");
	
	printf("\nBase: ");
	scanf("%f", &base);
	
	printf("\nAltura: ");
	scanf("%f", &altura);
	
	area = (base*altura)/2;
	
	printf("\n\nArea: %f\n\n", area);
	
	system("pause");
	
	
	return 0;
}
