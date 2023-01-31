#include <iostream>
#include <cmath>

int main(int argc, char** argv) {
	
	float r, volume;
	
	printf("Informe o raio da esfera: ");
	scanf("%f", &r);
	
	volume = (4/3)*M_PI*r*r*r;
	
	printf("\n\nVolume: %f\n\n", volume);
	
	system("pause");
	
	return 0;
}
