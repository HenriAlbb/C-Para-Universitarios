#include <iostream>



int main(int argc, char** argv) {
	
	float b_maior, b_menor, altura, area;
	
	printf("Informe a base menor, maior e altura do trapezio repectivamente: ");
	scanf("%f %f %f", &b_maior, &b_menor, &altura);
	
	area = ((b_menor + b_maior)*altura)/2;
	
	printf("\n\nArea: %f\n\n", area);
	
	system("pause");
	
	
	return 0;
}
