#include <iostream>

int main(int argc, char** argv) {
	
	float f, k;
	
	printf("Informe a temperatura em Farenheit: ");
	scanf("%f", &f);
	
	k = (f - 32)*(5.0/9.0) + 273;
	
	printf("\n\nKelvin: %f\n\n", k);
	
	system("pause");
	
	
	return 0;
}
