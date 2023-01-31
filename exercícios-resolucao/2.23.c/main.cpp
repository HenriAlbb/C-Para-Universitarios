#include <iostream>

int main(int argc, char** argv) {
	
	float c, k;
	
	printf("Informe a temperatura em Celsius: ");
	scanf("%f", &c);
	
	k = c + 273;
	
	printf("\n\nKelvin: %f\n\n", k);
	
	system("pause");
	
	return 0;
}
