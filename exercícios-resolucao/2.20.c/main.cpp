#include <iostream>

int main(int argc, char** argv) {
	
	float m, p;
	
	printf("Informe a medida em melimetros: ");
	scanf("%f", &m);
	
	p = m/25.4;
	
	printf("\n\nPolegadas: %f\n\n", p);
	
	system("pause");
	
	return 0;
}
