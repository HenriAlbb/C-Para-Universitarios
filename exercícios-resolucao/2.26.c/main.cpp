#include <iostream>

int main(int argc, char** argv) {
	
	float a, g, t;
	
	printf("<<Aceleracao da Gravidade>>");
	
	printf("\n\nInforme a altura do edificio: ");
	scanf("%f", &a);
	
	printf("\nInforme o tempo de queda: ");
	scanf("%f", &t);
	
	g = (2*a)/(t*t);
	
	printf("\n\nGravidade calculada: %f\n\n", g);
	
	system("pause");
	
	
	
	return 0;
}
