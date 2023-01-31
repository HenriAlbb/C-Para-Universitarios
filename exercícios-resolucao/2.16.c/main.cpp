#include <iostream>
#include <cmath>

int main(int argc, char** argv) {
	
	float g, r;
	
	printf("Informe um angulo em graus: ");
	scanf("%f", &g);
	
	r = (g*M_PI)/180;
	
	printf("\n\nRadianos: %f\n\n", r);
	
	system("pause");
	
	return 0;
}
