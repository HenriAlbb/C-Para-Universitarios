#include <iostream>

int main(int argc, char** argv) {
	
	float c, f;
	
	printf("Informe a temperatura em graus Celsius: ");
	scanf("%f", &c);
	
	f = ((9.0/5.0)*c) + 32;
	
	printf("\n\nFarenheit: %f\n\n", f);
	
	system("pause");
	
	return 0;
}
