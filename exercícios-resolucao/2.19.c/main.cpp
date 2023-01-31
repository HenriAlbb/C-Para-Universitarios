#include <iostream>

int main(int argc, char** argv) {
	
	float p, m;
	
	printf("Informe a medida em polegadas: ");
	scanf("%f", &p);
	
	m = p*25.4;
	
	printf("\n\nMilimetros: %f\n\n", m);
	
	system("pause");
	
	return 0;
}
