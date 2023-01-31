#include <iostream>

int main(int argc, char** argv) {
	
	float f, c;
	
	printf("Informe a temperatura em Farenheit: ");
	scanf("%f", &f);
	
	c = (f - 32)*(5.0/9.0);
	
	printf("\n\nCelsius: %f\n\n", c);
	
	system("pause");
	
	return 0;
}
