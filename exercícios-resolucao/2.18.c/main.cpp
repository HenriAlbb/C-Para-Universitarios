#include <iostream>
#include <cmath>

int main(int argc, char** argv) {
	
	float r, gr;
	
	printf("Informe um angulo em radianos: ");
	scanf("%f", &r);
	
	gr = (400/(2*M_PI))*r;
	
	printf("\n\nGrados: %f\n\n", gr);
	
	system("pause");
	
	return 0;
}
