#include <iostream>
#include <cmath>


int main(int argc, char** argv) {
	
	float r, area, comprimento;
	
	printf("Informe o raio do circulo: ");
	scanf("%f", &r);
	
	area = M_PI*r*r;
	comprimento = 2*M_PI*r;
	
	printf("\n\nArea: %f\nComprimento: %f\n\n", area, comprimento);
	
	system("pause");
	
	return 0;
}
